#include "symbolTable.h"

int main() {
  SymbolTable table;
  table.setValue("sum", 747);
  std::cout << table.getValue("sum") << std::endl;
}
