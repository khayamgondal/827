#pragma once

//  Declarations for a calculator that builds an AST
//  and a graphical representation of the AST.
//  by Brian Malloy

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "literal.h"
#include "symbolTable.h"

extern void yyerror(const char*);
extern void yyerror(const char*, const char);

class IdentNode : public Node {
public:
  IdentNode(const std::string id) : Node(), ident(id) { } 
  virtual ~IdentNode() {}
  const std::string getIdent() const { return ident; }
  const Literal* getValue() const { return SymbolTable::getInstance().getValue(ident); }
  virtual const Literal* eval() const;
private:
  std::string ident;
};

class BinaryNode : public Node {
public:
  BinaryNode(Node* l, Node* r) : Node(), left(l), right(r) {}
  virtual const Literal* eval() const = 0;
  Node* getLeft()  const { return left; }
  Node* getRight() const { return right; }
  BinaryNode(const BinaryNode&) = delete;
  BinaryNode& operator=(const BinaryNode&) = delete;
protected:
  Node *left;
  Node *right;
};

class FuncNode : public Node {
public:
  FuncNode(const std::string id, Node* stmts, bool isDef) : Node(), id(id), stmts(stmts), isDef(isDef) {}
  std::string getId() const {return id; }
  Node* getStmts() const {return stmts; }
  FuncNode(const FuncNode&) = delete;
  FuncNode& operator=(const FuncNode&) = delete;
  virtual const Literal* eval() const;	
protected:
  std::string id;
  Node *stmts;
  bool isDef;
};


class AsgBinaryNode : public BinaryNode {
public:
  AsgBinaryNode(Node* left, Node* right);
  virtual const Literal* eval() const;
};

class AddBinaryNode : public BinaryNode {
public:
  AddBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class SubBinaryNode : public BinaryNode {
public:
  SubBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class MulBinaryNode : public BinaryNode {
public:
  MulBinaryNode(Node* left, Node* right) : BinaryNode(left, right), isPow(false) {
	 // isPow = false;
  }
  MulBinaryNode(Node* left, Node* right, bool isPow) : BinaryNode(left, right), isPow(isPow) {
	  //this->isPow = isPow;
  }  
  virtual const Literal* eval() const;
private:
	bool isPow;
};


class EqequalBinaryNode : public BinaryNode {
public:
	EqequalBinaryNode(Node* left, Node* right) : BinaryNode(left, right), type(0) {}
	EqequalBinaryNode(Node* left, Node* right, int type) : BinaryNode(left, right), type(type) {}
	virtual const Literal* eval() const;

private:
 	int type;
};

class DivBinaryNode : public BinaryNode {
public:
  DivBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class DivIntBinaryNode : public BinaryNode {
public:
  DivIntBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class ModBinaryNode : public BinaryNode {
public:
  ModBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class PowBinaryNode : public BinaryNode {
public:
  PowBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};
