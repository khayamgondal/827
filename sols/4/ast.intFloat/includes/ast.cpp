#include <iostream>
#include <typeinfo>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include "ast.h"
#include "symbolTable.h"

const Literal* IdentNode::eval() const { 
  const Literal* val = SymbolTable::getInstance().getValue(ident);
  return val;
}


AsgBinaryNode::AsgBinaryNode(Node* left, Node* right) : 
  BinaryNode(left, right) { 
  const Literal* res = right->eval();
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  //std::cout<<"setting "<<n<< " "; res->print();
  SymbolTable::getInstance().setValue(n, res);
  //SymbolTable::getInstance().getValue(n)->print();
}


const Literal* AsgBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  const Literal* res = right->eval();

  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  SymbolTable::getInstance().setValue(n, res);
  return res;
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
