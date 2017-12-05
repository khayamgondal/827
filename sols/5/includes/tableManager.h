#include "node.h"
#include <iostream>
#include <vector>

class tableManager {
  
 public:
  tableManager(std::string type, Node* stmt): type(type), stmt(stmt) {
}
  const std::string getType();
  const Node* getStmt(); 
 private:
   std::string type;
   Node* stmt;
};
