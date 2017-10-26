#ifndef SYMBOLTABLE__H
#define SYMBOLTABLE__H

#include <iostream>
#include <string>
#include <map>

class Literal;

class SymbolTable {
public:
  static SymbolTable& getInstance();
  void setValue(const std::string& name, Literal* val);
  Literal* getValue(const std::string& name) const;
private:
  std::map<std::string, Literal*> table;
};

#endif