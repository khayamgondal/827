#include "node.h"
#include <iostream>
#include <vector>

class tableManager {
  
 public:
  tableManager();
  void pushFunc(std::string& id, const Node* stmt);

 private:
   std::string id;
   std::vector<Node*> stmts;
};
