#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include "ast.h"
#include "symbolTable.h"

void freeAST(Node* node) {
  if ( node ) {
    BinaryNode* temp = dynamic_cast<BinaryNode*>(node);
    if ( temp ) {
      freeAST(temp->getLeft());
      freeAST(temp->getRight());
    }
    delete node;
  }
}

Literal* IdentNode::eval() const { 
  Literal* val = SymbolTable::getInstance().getValue(ident);
  return val;
}


AsgBinaryNode::AsgBinaryNode(Node* left, Node* right) : 
  BinaryNode(left, right) { 
  Literal* res = right->eval();
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  SymbolTable::getInstance().setValue(n, res);
}


Literal* AsgBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  Literal* res = right->eval();

  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  SymbolTable::getInstance().setValue(n, res);
  return res;
}

Literal* AddBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  Literal* x = left->eval();
  Literal* y = right->eval();
  return (*x+*y);
}

Literal* SubBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  Literal* x = left->eval();
  Literal* y = right->eval();
  return ((*x)-(*y));
}

Literal* MulBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  Literal* x = left->eval();
  Literal* y = right->eval();
  return ((*x)*(*y));
}

Literal* DivBinaryNode::eval() const { 
  if (!left || !right) {
    throw "error";
  }
  Literal* x = left->eval();
  Literal* y = right->eval();
  if ( y->eval() == 0 ) {
    throw std::string("ZeroDivisionError");
  }

  return ((*x)/(*y));
}

