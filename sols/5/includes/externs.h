#ifndef EXTERNS_H
#define EXERNS_H
#include <vector>	


class StmtsStruct{
	public:
		std::vector<Node*> stmts;
		std::string name = "main";
	};	

class Scope {
	public:
		static std::vector<StmtsStruct*> scope;
		void eval();
};

#endif
