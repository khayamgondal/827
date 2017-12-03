#include <iostream>
#include "tableManager.h"
#include "node.h"

tableManager::tableManager(std::string id, Node* stmts), id(id), stmts(stmts) {
}
void tableManager::pushStmt(Node* stmt) {
  stmts.push_back(stmt);
}

