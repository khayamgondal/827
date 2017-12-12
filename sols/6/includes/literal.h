#include "node.h"
#include "poolOfNodes.h"
#include <math.h> 

class Literal : public Node {
public:
  virtual ~Literal() {}
  	  
  virtual const Literal* operator+(const Literal& rhs) const =0;
  virtual const Literal* opPlus(float) const =0;
  virtual const Literal* opPlus(int) const =0;

  virtual const Literal* operator==(const Literal& rhs) const = 0;
  virtual const Literal* opComp(float, int) const =0;
  virtual const Literal* opComp(int, int) const =0;

  virtual const Literal* operator!=(const Literal& rhs) const = 0;
  virtual const Literal* operator<(const Literal& rhs) const = 0;
  virtual const Literal* operator<=(const Literal& rhs) const = 0;
  virtual const Literal* operator>(const Literal& rhs) const = 0;
  virtual const Literal* operator>=(const Literal& rhs) const = 0;


  virtual const Literal* operator*(const Literal& rhs) const =0;
  virtual const Literal* opMult(float) const =0;
  virtual const Literal* opMult(int) const =0;

  virtual const Literal* operator-(const Literal& rhs) const =0;
  virtual const Literal* opSubt(float) const =0;
  virtual const Literal* opSubt(int) const =0;

  virtual const Literal* operator/(const Literal& rhs) const =0;
  virtual const Literal* opDiv(float) const =0;
  virtual const Literal* opDiv(int) const =0;

  virtual const Literal* operator^(const Literal& rhs) const =0;
  virtual const Literal* opDivInt(float) const =0;
  virtual const Literal* opDivInt(int) const =0;

  virtual const Literal* operator%(const Literal& rhs) const =0;
  virtual const Literal* opMod(float) const =0;
  virtual const Literal* opMod(int) const =0;
  
  //virtual const Literal* operator++() const =0;
  //virtual const Literal* opPPlus() const =0;
  
  virtual const Literal* Pow(const Literal& rhs) const =0;
  virtual const Literal* opPow(float) const =0;
  virtual const Literal* opPow(int) const =0;
  //virtual const Literal* operator#(const Literal& rhs) const =0;
  //virtual const Literal* oPow(float) const =0;
  //virtual const Literal* opPow(int) const =0;
  // 

  virtual const Literal* eval() const = 0;
  virtual void print() const { 
    std::cout << "No Way" << std::endl; 
  }
};

class FloatLiteral: public Literal {
public:
  FloatLiteral(float _val): val(_val) {}

  float getVal() { return val;}

  virtual const Literal* operator+(const Literal& rhs) const  {
    return rhs.opPlus(val);
  }
  virtual const Literal* opPlus(float lhs) const  {
    const Literal* node = new FloatLiteral(lhs + val);
    PoolOfNodes::getInstance().add(node);
    return node; 
  }
  virtual const Literal* opPlus(int lhs) const  {
    const Literal* node = new FloatLiteral(lhs + val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator== (const Literal& rhs) const {
	  return rhs.opComp(val, 0);
  }
  virtual const Literal* operator!= (const Literal& rhs) const {
	  return rhs.opComp(val, 1);
  }
  virtual const Literal* operator> (const Literal& rhs) const {
	  return rhs.opComp(val, 2);
  }
  virtual const Literal* operator>= (const Literal& rhs) const {
	  return rhs.opComp(val, 3);
  }
  virtual const Literal* operator< (const Literal& rhs) const {
	  return rhs.opComp(val, 4);
  }
  virtual const Literal* operator<= (const Literal& rhs) const {
	  return rhs.opComp(val, 5);
  }
  
  virtual const Literal* opComp(float lhs, int type) const  {
	bool result ;
	if (type==0) result = (lhs == val);
	if (type==1) result = (lhs != val);
	if (type==2) result = (lhs < val);
	if (type==3) result = (lhs <= val);
	if (type==4) result = (lhs > val);
	if (type==5) result = (lhs >= val);
	const Literal* node ;
	if (result) 
    	node = new FloatLiteral(1);
	else     	
		node = new FloatLiteral(0);

    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opComp(int lhs, int type) const  {
	bool result ;
	if (type==0) result = (lhs == val);
	if (type==1) result = (lhs != val);
	if (type==2) result = (lhs < val);
	if (type==3) result = (lhs <= val);
	if (type==4) result = (lhs > val);
	if (type==5) result = (lhs >= val);
  	const Literal* node ;
  	if (result) 
      	node = new FloatLiteral(1);
  	else     	
  		node = new FloatLiteral(0);

      PoolOfNodes::getInstance().add(node);
      return node;
  }
  
  virtual const Literal* operator-(const Literal& rhs) const  {
    return rhs.opSubt(val);
  }
  virtual const Literal* opSubt(float lhs) const  {
    const Literal* node = new FloatLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opSubt(int lhs) const  {
    const Literal* node = new FloatLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator*(const Literal& rhs) const  {
    return rhs.opMult(val);
  }
  virtual const Literal* opMult(float lhs) const  {
    const Literal* node = new FloatLiteral(lhs * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMult(int lhs) const  {
    const Literal* node = new FloatLiteral(static_cast<float>(lhs) * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator/(const Literal& rhs) const  {
    return rhs.opDiv(val);
  }
  virtual const Literal* opDiv(float lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(lhs / val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDiv(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(lhs / val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator^(const Literal& rhs) const  {
    return rhs.opDivInt(val);
  }
  virtual const Literal* opDivInt(float lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    //const Literal* node  = this.opDiv(lhs);
    const Literal* node = new FloatLiteral(floor(lhs / val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDivInt(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(floor(lhs / val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator%(const Literal& rhs) const  {
    return rhs.opMod(val);
  }
  virtual const Literal* opMod(float lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(fmod(lhs, val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMod(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(fmod(lhs, val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  
 /* virtual const Literal* operator++() const  {
    return opPPlus();
  }
  virtual const Literal* opPPlus() const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
	float v = val+1;
    const Literal* node = new FloatLiteral(v);
    PoolOfNodes::getInstance().add(node);
    return node;
  }*/
  
  virtual const Literal* Pow(const Literal& rhs) const  {
    return rhs.opPow(val);
  }
  virtual const Literal* opPow(float lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(pow(lhs, val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPow(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(pow(lhs, val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  
/*  virtual const Literal* operator#(const Literal& rhs) const  {
    return rhs.opPow(val);
  }
  virtual const Literal* opPow(float lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(fmod(lhs, val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPow(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(fmod(lhs, val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }*/
  
  virtual const Literal* eval() const { return this; }
  virtual void print() const { 
    std::cout << "FLOAT: " << val << std::endl; 
  }
private:
  float val;
};

class IntLiteral: public Literal {
public:
 IntLiteral(int _val): val(_val) {}
 
 int getVal() { return val;}

  virtual const Literal* operator+(const Literal& rhs) const  {
    return rhs.opPlus(val);
  }
  virtual const Literal* opPlus(float lhs) const  {
    const Literal* node = new FloatLiteral(static_cast<float>(val) + lhs);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPlus(int lhs) const  {
    const Literal* node = new IntLiteral(lhs + val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator== (const Literal& rhs) const {
	  return rhs.opComp(val, 0);
  }
  virtual const Literal* operator!= (const Literal& rhs) const {
	  return rhs.opComp(val, 1);
  }
  virtual const Literal* operator> (const Literal& rhs) const {
	  return rhs.opComp(val, 2);
  }
  virtual const Literal* operator>= (const Literal& rhs) const {
	  return rhs.opComp(val, 3);
  }
  virtual const Literal* operator< (const Literal& rhs) const {
	  return rhs.opComp(val, 4);
  }
  virtual const Literal* operator<= (const Literal& rhs) const {
	  return rhs.opComp(val, 5);
  }
  virtual const Literal* opComp(float lhs, int type) const  {
	bool result ;
	if (type==0) result = (lhs == val);
	if (type==1) result = (lhs != val);
	if (type==2) result = (lhs < val);
	if (type==3) result = (lhs <= val);
	if (type==4) result = (lhs > val);
	if (type==5) result = (lhs >= val);
	
	const Literal* node ;
	if (result) 
    	node = new IntLiteral(1);
	else     	
		node = new IntLiteral(0);

    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opComp(int lhs, int type) const  {
	bool result ;
	if (type==0) result = (lhs == val);
	if (type==1) result = (lhs != val);
	if (type==2) result = (lhs < val);
	if (type==3) result = (lhs <= val);
	if (type==4) result = (lhs > val);
	if (type==5) result = (lhs >= val);
  	const Literal* node ;
  	if (result) 
      	node = new IntLiteral(1);
  	else     	
  		node = new IntLiteral(0);

      PoolOfNodes::getInstance().add(node);
      return node;
  }
  virtual const Literal* operator-(const Literal& rhs) const  {
    return rhs.opSubt(val);
  }
  virtual const Literal* opSubt(float lhs) const  {
    const Literal* node = new FloatLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opSubt(int lhs) const  {
    const Literal* node = new IntLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator*(const Literal& rhs) const  {
    return rhs.opMult(val);
  }
  virtual const Literal* opMult(float lhs) const  {
    const Literal* node = new FloatLiteral(lhs * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMult(int lhs) const  {
    const Literal* node = new IntLiteral(lhs * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator/(const Literal& rhs) const  {
    return rhs.opDiv(val);
  }
  virtual const Literal* opDiv(float lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(lhs / val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDiv(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
	
    const Literal* node = new IntLiteral(floor(lhs / float (val)));
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator^(const Literal& rhs) const  {
    return rhs.opDivInt(val);
  }
  virtual const Literal* opDivInt(float lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(floor(lhs / val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDivInt(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new IntLiteral(floor(lhs / val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator%(const Literal& rhs) const  {
    return rhs.opMod(val);
  }
  virtual const Literal* opMod(float lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    //const IntLiteral* lhsInt = new IntLiteral(lhs);
    const Literal* node = new IntLiteral((int) floor(lhs) % val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMod(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new IntLiteral(lhs % val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  
  /*virtual const Literal* operator++() const  {
    return opPPlus();
  }
  virtual const Literal* opPPlus() const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
	int v = val+1;
    const Literal* node = new IntLiteral(v);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  */
  virtual const Literal* Pow(const Literal& rhs) const  {
    return rhs.opPow(val);
  }
  virtual const Literal* opPow(float lhs) const  {
    const Literal* node = new FloatLiteral(pow(lhs, val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPow(int lhs) const  {
    const Literal* node = new IntLiteral(pow(lhs, val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  
  /*virtual const Literal* operator#(const Literal& rhs) const  {
    return rhs.opPow(val);
  }
  virtual const Literal* opPow(float lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    //const IntLiteral* lhsInt = new IntLiteral(lhs);
    const Literal* node = new IntLiteral((int) floor(lhs) % val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPow(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new IntLiteral(lhs % val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }*/
  
  virtual const Literal* eval() const { return this; }
  virtual void print() const { 
    std::cout << "INT: " << val << std::endl; 
  }
private:
  int val;
};

