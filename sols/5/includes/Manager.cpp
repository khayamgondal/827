#include <iostream>
#include "tableManager.h"
//#include "scopeManager.h"
#include "node.h"


const std::string tableManager::getType() {
  return type;
}
const Node* tableManager::getStmt() {
  return stmt;
}
