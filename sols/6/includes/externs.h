#ifndef EXTERNS_H
#define EXERNS_H
#include <vector>	


class StmtsStruct{
	public:
                StmtsStruct() : stmts(), name(), arg() {}
		~StmtsStruct();
		std::vector<Node*> stmts;
		std::string name = "main";
		std::string arg;
	};	

class Scope {
	public:
		static std::vector<StmtsStruct*> scope;
		void eval();
};

#endif
