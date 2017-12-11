#include "node.h"
#include <iostream>
#include <vector>

class ScopeManager {
  
 public:
  ScopeManager(std::vector <tableManager*> stmtsTable , bool isTrue, bool returned): 
  							stmtsTable(stmtsTable), isTrue(isTrue), returned(returned) {
}
 private:
	 std::vector <tableManager*> stmtsTable ;
	 bool isTrue;
	 bool returned;
};
