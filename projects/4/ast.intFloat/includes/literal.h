#include "node.h"

class Literal : public Node {
public:
  virtual ~Literal() {}

  virtual const Literal* operator+(const Literal& rhs) const =0;
  virtual const Literal* opPlus(float) const =0;
  virtual const Literal* opPlus(int) const =0;

  virtual const Literal* operator*(const Literal& rhs) const =0;
  virtual const Literal* opMult(float) const =0;
  virtual const Literal* opMult(int) const =0;

  virtual const Literal* operator-(const Literal& rhs) const =0;
  virtual const Literal* opSubt(float) const =0;
  virtual const Literal* opSubt(int) const =0;

  virtual const Literal* operator/(const Literal& rhs) const =0;
  virtual const Literal* opDiv(float) const =0;
  virtual const Literal* opDiv(int) const =0;

  virtual const Literal* eval() const = 0;
  virtual void print() const { 
    std::cout << "No Way" << std::endl; 
  }
};

class FloatLiteral: public Literal {
public:
  FloatLiteral(float _val): val(_val) {}

  virtual const Literal* operator+(const Literal& rhs) const  {
    return rhs.opPlus(val);
  }
  virtual const Literal* opPlus(float lhs) const  {
    return new FloatLiteral(lhs + val);
  }
  virtual const Literal* opPlus(int lhs) const  {
    return new FloatLiteral(lhs + val);
  }

  virtual const Literal* operator-(const Literal& rhs) const  {
    return rhs.opSubt(val);
  }
  virtual const Literal* opSubt(float lhs) const  {
    return new FloatLiteral(lhs - val);
  }
  virtual const Literal* opSubt(int lhs) const  {
    return new FloatLiteral(lhs - val);
  }

  virtual const Literal* operator*(const Literal& rhs) const  {
    return rhs.opMult(val);
  }
  virtual const Literal* opMult(float lhs) const  {
    return new FloatLiteral(lhs * val);
  }
  virtual const Literal* opMult(int lhs) const  {
    return new FloatLiteral(static_cast<float>(lhs) * val);
  }

  virtual const Literal* operator/(const Literal& rhs) const  {
    return rhs.opDiv(val);
  }
  virtual const Literal* opDiv(float lhs) const  {
    return new FloatLiteral(lhs / val);
  }
  virtual const Literal* opDiv(int lhs) const  {
    return new FloatLiteral(lhs / val);
  }

  //virtual Literal* eval() const { return new FloatLiteral(val); }
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

  virtual const Literal* operator+(const Literal& rhs) const  {
    return rhs.opPlus(val);
  }
  virtual const Literal* opPlus(float lhs) const  {
    return new FloatLiteral(static_cast<float>(val) + lhs);
  }
  virtual const Literal* opPlus(int lhs) const  {
    return new IntLiteral(lhs + val);
  }

  virtual const Literal* operator-(const Literal& rhs) const  {
    return rhs.opSubt(val);
  }
  virtual const Literal* opSubt(float lhs) const  {
    return new FloatLiteral(lhs - val);
  }
  virtual const Literal* opSubt(int lhs) const  {
    return new IntLiteral(lhs - val);
  }

  virtual const Literal* operator*(const Literal& rhs) const  {
    return rhs.opMult(val);
  }
  virtual const Literal* opMult(float lhs) const  {
    return new FloatLiteral(lhs * val);
  }
  virtual const Literal* opMult(int lhs) const  {
    return new IntLiteral(lhs * val);
  }

  virtual const Literal* operator/(const Literal& rhs) const  {
    return rhs.opDiv(val);
  }
  virtual const Literal* opDiv(float lhs) const  {
    return new FloatLiteral(lhs / val);
  }
  virtual const Literal* opDiv(int lhs) const  {
    return new IntLiteral(lhs / val);
  }

  virtual const Literal* eval() const { return new IntLiteral(val); }
  virtual void print() const { 
    std::cout << "INT: " << val << std::endl; 
  }
private:
  int val;
};

