#pragma once

//  Declarations for a calculator that builds an AST
//  and a graphical representation of the AST.
//  by Brian Malloy

#include <iostream>
#include <string>
#include <map>

extern void yyerror(const char*);
extern void yyerror(const char*, const char);

class SymbolTable;
class Literal;

class Node {
public:
  Node() {}
  virtual ~Node() {}
  virtual Literal* eval() const = 0;
  virtual void print() const { 
    std::cout << "NODE" << std::endl; 
  }
};

// Class Literal inherits from Node; so I'm putting the include here!
// Alternatively, we could put class Node in a file by itself and
// then only include it into literal.h
#include "literal.h"

void freeAST(Node*);

class IdentNode : public Node {
public:
  IdentNode(const std::string id) : Node(), ident(id) { } 
  virtual ~IdentNode() {}
  const std::string getIdent() const { return ident; }
  virtual Literal* eval() const;
private:
  std::string ident;
};

class BinaryNode : public Node {
public:
  BinaryNode(Node* l, Node* r) : Node(), left(l), right(r) {}
  virtual Literal* eval() const = 0;
  Node* getLeft()  const { return left; }
  Node* getRight() const { return right; }
protected:
  Node *left;
  Node *right;
};

class AssBinaryNode : public BinaryNode {
public:
  AssBinaryNode(Node* left, Node* right);
  virtual Literal* eval() const;
};

class AddBinaryNode : public BinaryNode {
public:
  AddBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual Literal* eval() const;
};

class SubBinaryNode : public BinaryNode {
public:
  SubBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual Literal* eval() const;
};

class MulBinaryNode : public BinaryNode {
public:
  MulBinaryNode(Node* left, Node* right) : BinaryNode(left, right) {}
  virtual Literal* eval() const;
};

class DivBinaryNode : public BinaryNode {
public:
  DivBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual Literal* eval() const;
};

