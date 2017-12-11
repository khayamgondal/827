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
        if (funcNode != NULL) 
	  for (int i = lookupIndex ; i >= 0 ; i--) { //std::cout<<s.at(i)->name<<"LOOKING FOR "<<funcNode->getId()<<std::endl;
	    if (s.at(i)->name == funcNode->getId()) { //we found the signature 
	      evalStmts(s, s.at(i)->stmts);
	      return;
            }
	  }
	CompBinaryNode *compNode = dynamic_cast<CompBinaryNode*> (curStmt) ; 
	if (compNode != NULL) {compNode->eval()->print(); }

	RetBinaryNode *retNode = dynamic_cast<RetBinaryNode*> (curStmt) ; 
	if (retNode != NULL) return;

	PrintBinaryNode *printNode = dynamic_cast<PrintBinaryNode*> (curStmt) ; 
	if (printNode != NULL ) curStmt->eval()->print();
	
	//else curStmt->eval();
    }

}

void Scope::eval() {
  evalStmts(scope, scope.at(0)->stmts);
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

const Literal* RetBinaryNode::eval() const {
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

const Literal* PrintBinaryNode::eval() const { 
  return left->eval();
}

const Literal* CompBinaryNode::eval() const { 
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
