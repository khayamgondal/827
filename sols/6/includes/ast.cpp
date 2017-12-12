#include <iostream>
#include <typeinfo>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <algorithm>  
#include "ast.h"
#include "symbolTable.h"
#include "externs.h"

//int lookupIndex = 0;
int ifFlag = 1;
int lastFlag = 1;

ArgBinaryNode *argNode;
	
const Literal* IdentNode::eval() const { 
  const Literal* val = SymbolTable::getInstance().getValue(ident);
  return val;
}

void evalScope(std::vector<StmtsStruct*> s, std::vector<Node*> stmts, int currentLevel, ArgBinaryNode* argNode) {
	
	for (auto *curStmt : stmts) {
		if ( (dynamic_cast<ArgBinaryNode*> (curStmt)) != NULL )  {
			argNode = dynamic_cast<ArgBinaryNode*> (curStmt);  }
			
		FuncNode *funcNode = dynamic_cast<FuncNode*> (curStmt) ; 
	        if (funcNode != NULL) { // try to find def in level + 1 OR size to 0

				for (int i = std::min(((int)(s.size()))-1, currentLevel+1) ; i >= 0 ; i--) {
				    if (s.at(i)->name == funcNode->getId()) { //we found the signature 
				//	std::cout<<"LEVE  "<<currentLevel<< "found " << funcNode->getId()<<std::endl;
						if (argNode != NULL) { 
						Node *node = new AsgBinaryNode(new IdentNode(s.at(i)->arg), argNode); 
						 node->eval();  			
						PoolOfNodes::getInstance().add(node);}
				//std::cout<<"HERE"; 
				      evalScope(s, s.at(i)->stmts, currentLevel++, argNode);
				      return;
			            }
				}
			}
			CompBinaryNode *compNode = dynamic_cast<CompBinaryNode*> (curStmt) ; 
			if (compNode != NULL) { //compNode->eval()->print(); 
				//std::cout<<"IS"<<std::endl;
		           lastFlag = (static_cast<FloatLiteral*> (const_cast<Literal*> ( compNode->eval() ) )->getVal() ); 
			   ifFlag = lastFlag; 	//std::cout<<lastFlag<<std::endl; 			
			  // PoolOfNodes::getInstance().add(compNode);			
			}

			IfEndNode *ifEndNode = dynamic_cast<IfEndNode*> (curStmt);
			if(ifEndNode != NULL) { ifFlag = 1 ; //std::cout<<"IE"<<std::endl; //lastFlag;  //
				}

			ElseStartNode *elseStartNode = dynamic_cast<ElseStartNode*> (curStmt);
			if(elseStartNode != NULL) { if (lastFlag ==1) ifFlag = 0; else ifFlag = 1; //std::cout<<"ES"<<std::endl; 
			}

			ElseEndNode *elseEndNode = dynamic_cast<ElseEndNode*> (curStmt);
			if(elseEndNode != NULL) { ifFlag = 1;  //std::cout<<"EE"<<std::endl;
			}
	
			AsgBinaryNode *asgBinaryNode = dynamic_cast<AsgBinaryNode*> (curStmt);
			if(asgBinaryNode != NULL) { curStmt->eval();	}

			AddBinaryNode *addBinaryNode = dynamic_cast<AddBinaryNode*> (curStmt);
			if(addBinaryNode != NULL) { curStmt->eval();	}

			//else curStmt->eval();
	

			if (ifFlag == 1) {
				RetBinaryNode *retNode = dynamic_cast<RetBinaryNode*> (curStmt) ; 
				if (retNode != NULL) return;

				PrintBinaryNode *printNode = dynamic_cast<PrintBinaryNode*> (curStmt) ; 
				
				if (printNode != NULL ) { curStmt->eval()->print();  //std::cout<<"IN PRINT\n";
				}
	
			}

	} 
	stmts.clear();
}

/*void evalStmts(std::vector<StmtsStruct*> s, std::vector<Node*> stmts) {
 // if (lookupIndex < stmts.size()-1) 
  lookupIndex ++; std::cout<<"CURRENT index "<<lookupIndex<<std::endl;
  //std::cout<<lookupIndex<<std::endl;
    for (auto *curStmt : stmts) {
	FuncNode *funcNode = dynamic_cast<FuncNode*> (curStmt) ; 
        if (funcNode != NULL) 
	  for (int i = lookupIndex ; i >= 0 ; i--) { std::cout<<s.at(i)->name<<" LOOKING FOR "<<funcNode->getId()<<std::endl;
	    if (s.at(i)->name == funcNode->getId()) { //we found the signature 
	      evalStmts(s, s.at(i)->stmts);
	      return;
            }
	  }
	CompBinaryNode *compNode = dynamic_cast<CompBinaryNode*> (curStmt) ; 
	if (compNode != NULL) { //compNode->eval()->print(); 
           lastFlag = (static_cast<FloatLiteral*> (const_cast<Literal*> ( compNode->eval() ) )->getVal() ); 
	   ifFlag = lastFlag; 	// std::cout<<lastFlag<<std::endl; 			std::cout<<"IS"<<std::endl;
	}

	IfEndNode *ifEndNode = dynamic_cast<IfEndNode*> (curStmt);
	if(ifEndNode != NULL) { ifFlag = lastFlag;  //std::cout<<"IE"<<std::endl;
		}

	ElseStartNode *elseStartNode = dynamic_cast<ElseStartNode*> (curStmt);
	if(elseStartNode != NULL) { if (lastFlag ==1) ifFlag = 0; else ifFlag = 1; //std::cout<<"ES"<<std::endl; 
	}

	ElseEndNode *elseEndNode = dynamic_cast<ElseEndNode*> (curStmt);
	if(elseEndNode != NULL) { ifFlag = 1;  //std::cout<<"EE"<<std::endl;
	}
	
	AsgBinaryNode *asgBinaryNode = dynamic_cast<AsgBinaryNode*> (curStmt);
	if(asgBinaryNode != NULL) { curStmt->eval();	}

	AddBinaryNode *addBinaryNode = dynamic_cast<AddBinaryNode*> (curStmt);
	if(addBinaryNode != NULL) { curStmt->eval();	}

	//else curStmt->eval();
	

	if (ifFlag == 1) {
		RetBinaryNode *retNode = dynamic_cast<RetBinaryNode*> (curStmt) ; 
		if (retNode != NULL) return;

		PrintBinaryNode *printNode = dynamic_cast<PrintBinaryNode*> (curStmt) ; 
		if (printNode != NULL ) curStmt->eval()->print();
	
	}
    }

}*/

void Scope::eval() {
	//lookupIndex = 0;
  //evalStmts(scope, scope.at(0)->stmts);
//	for (auto * s : scope) std::cout<<s->stmts.size()<<std::endl; 
	int loopIndex = 0;
	
for (auto *curStmt : scope.at(0)->stmts) { 
	//std::cout<<scope.at(0)->stmts.size()<<std::endl;;
		if ( (dynamic_cast<ArgBinaryNode*> (curStmt)) != NULL )  {
			argNode = dynamic_cast<ArgBinaryNode*> (curStmt); 
				//argNode->eval()->print(); 
			//	scope.at(0)->stmts.erase(scope.at(0)->stmts.begin() + loopIndex);
		}
		FuncNode *funcNode = dynamic_cast<FuncNode*> (curStmt) ; 			PoolOfNodes::getInstance().add(funcNode);	
        if (funcNode != NULL) { // try to find def in level + 1 OR size to 0
			
			for (int i = 1 ; i >= 0 ; i--) { 				
			//	 std::cout<<scope.at(i)->name <<" LEVE  "<<i<< "looking for " << funcNode->getId()<<std::endl;
			    if (scope.at(i)->name == funcNode->getId()) { //we found the signature  
					if (argNode != NULL) { 
					Node *node = new AsgBinaryNode(new IdentNode(scope.at(i)->arg), argNode); 
					 node->eval();
					 //std::cout << scope.at(i)->arg << "is" ; node->eval()->print();
				 }
			      evalScope(scope, scope.at(i)->stmts, 2, argNode);
	  			//scope.at(0)->stmts.erase(scope.at(0)->stmts.begin() + loopIndex);
			      return;
		            }
			}
		}
	loopIndex ++; 
	}
	 //scope.at(0)->stmts.clear(); 	for (auto * s : scope) std::cout<<s->stmts.size()<<std::endl; 
}

AsgBinaryNode::AsgBinaryNode(Node* left, Node* right) : 
  BinaryNode(left, right) { 

}

const Literal* FuncNode::eval() const {
  return NULL;
}
const Literal* ElseStartNode::eval() const {
  return NULL;
}
const Literal* IfEndNode::eval() const {
  return NULL;
}

const Literal* ElseEndNode::eval() const {
  return NULL;
}

const Literal* ArgBinaryNode::eval() const {
  return left->eval();
}
const Literal* RetBinaryNode::eval() const {
  return NULL;
}

const Literal* AsgBinaryNode::eval() const { 
    const Literal* res = right->eval();
    const std::string n = static_cast<IdentNode*>(left)->getIdent();
    SymbolTable::getInstance().setValue(n, res);
    //std::cout<< n << " ASS " ; res->eval()->print();
	//SymbolTable::getInstance().getValue(n)->eval()->print();
    
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
