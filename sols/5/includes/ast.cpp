#include <iostream>
#include <typeinfo>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include "ast.h"
#include "symbolTable.h"
#include "externs.h"

int lookupIndex = 0;

const Literal* IdentNode::eval() const { 
  const Literal* val = SymbolTable::getInstance().getValue(ident);
  return val;
}

void evalStmts(std::vector<StmtsStruct*> s, std::vector<Node*> stmts) {
  lookupIndex ++;
    for (auto *curStmt : stmts) { 
	FuncNode *funcNode = dynamic_cast<FuncNode*> (curStmt) ; 
        if (funcNode == NULL) curStmt->eval()->print();
        else  // start from lookup index and go in all scopes to find this fun signature
 	  for (int i = lookupIndex ; i >= 0 ; i--) { //std::cout<<s.at(i)->name<<"LOOKING FOR "<<funcNode->getId()<<std::endl;
	    if (s.at(i)->name == funcNode->getId()) { //we found the signature 
	      evalStmts(s, s.at(i)->stmts);
	      return;
            }
	  }
    }

}

void Scope::eval() {
  evalStmts(scope, scope.at(0)->stmts);
 // for (auto *curScope : scope) {

  //}
		/*	 for (int i = lookUpIndex ; i >= 0 ; i--) { std::cout<<"INSIDE ................";
				auto *nextScope = Scope::scope.at(i); std::cout<<"NAAAAAAAAMMME"<<nextScope->name<<std::endl;
					if (nextScope->name == (dynamic_cast<FuncNode*>(node))->getId()) { 
						for (auto &stmt : nextScope->stmts) {
							Node *funcNode = dynamic_cast<Node*> stmt ; 
							if (funcNode != NULL) 

							else	stmt->eval()->print();	
						}			
					}
				}*/
}

AsgBinaryNode::AsgBinaryNode(Node* left, Node* right) : 
  BinaryNode(left, right) { 
  const Literal* res = right->eval();
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  SymbolTable::getInstance().setValue(n, res);
}

const Literal* FuncNode::eval() const {
  return NULL;
}

const Literal* AsgBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* res = right->eval();
  //std::cout<<"setto"; res->eval()->print();
  //const std::string n = static_cast<IdentNode*>(left)->getIdent();
  //std::cout<<"setto"; res->eval()->print();
  //SymbolTable::getInstance().setValue(n, res);
  return res;
}
const Literal* EqequalBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* y = right->eval();
  const Literal* x = left->eval();
  if (type == 0)
  	return (*x)==(*y);
  
  else if (type ==1)
	return (*x)!=(*y);

  
  else if (type == 2)
	return (*x)<(*y);
  
  else if (type ==3)
	return (*x)<=(*y);
  
  else if (type ==4)
	return (*x)>(*y);
  
  else if (type ==5)
	return (*x)>=(*y);
  else return NULL;
}
const Literal* AddBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return (*x+*y);
}

const Literal* SubBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)-(*y));
}

const Literal* MulBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  if (!isPow)
  	return ((*x)*(*y));
  else {
	  return x->Pow(*y);
  }
}

const Literal* DivBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)/(*y));
}

const Literal* DivIntBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)^(*y)); // ^ means  //
}

const Literal* ModBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)%(*y));
}

/*const Literal* PowBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)#(*y)); // # is power
}*/
