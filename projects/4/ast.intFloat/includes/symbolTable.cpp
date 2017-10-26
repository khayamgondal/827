#include "symbolTable.h"
#include "ast.h"

SymbolTable& SymbolTable::getInstance() {
  static SymbolTable instance;
  return instance;
}

Literal* SymbolTable::getValue(const std::string& name) const {
  std::map<std::string, Literal*>::const_iterator it = table.find(name);
  if ( it == table.end() ) throw name+std::string(" not found");
  return it->second;
}

void SymbolTable::setValue(const std::string& name, Literal* val) { 
  table[name] = val;  
}


