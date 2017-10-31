
#include <iostream>

class Literal {
public:
  virtual ~Literal() {}
  virtual Literal* operator+(Literal& rhs)=0;
  virtual Literal* opPlus(float)=0;
  virtual Literal* opPlus(int)=0;

  virtual Literal* operator*(Literal& rhs)=0;
  virtual Literal* opMult(float)=0;
  virtual Literal* opMult(int)=0;

  virtual void print()const{ std::cout << "No Way" << std::endl; }
};

class FloatLiteral: public Literal {
public:
  FloatLiteral(float _val): val(_val) {}
  virtual Literal* operator+(Literal& rhs) {
    return rhs.opPlus(val);
  }
  virtual Literal* opPlus(float lhs) {
    return new FloatLiteral(lhs + val);
  }
  virtual Literal* opPlus(int lhs) {
    return new FloatLiteral(static_cast<float>(lhs) + val);
  }
  virtual Literal* operator*(Literal& rhs) {
    return rhs.opMult(val);
  }
  virtual Literal* opMult(float lhs) {
    return new FloatLiteral(lhs * val);
  }
  virtual Literal* opMult(int lhs) {
    return new FloatLiteral(static_cast<float>(lhs) * val);
  }

  virtual void print()const{ std::cout << "FLOAT: " << val << std::endl; }
private:
  float val;
};

// There's an error in this class that won't show up
// because it's only addition and multiplication.
class IntLiteral: public Literal {
public:
  IntLiteral(int _val): val(_val) {}
  virtual Literal* operator+(Literal& rhs) { return rhs.opPlus(val); }
  virtual Literal* operator*(Literal& rhs) { return rhs.opMult(val); }
  virtual Literal* opPlus(float lhs) {
    return new FloatLiteral(static_cast<float>(val) + lhs);
  }
  virtual Literal* opPlus(int lhs) {
    return new IntLiteral(lhs + val);
  }
  virtual Literal* opMult(float lhs) {
    return new FloatLiteral(static_cast<float>(val) * lhs);
  }
  virtual Literal* opMult(int lhs) {
    return new IntLiteral(lhs * val);
  }
  virtual void print()const{ std::cout << "INT: " << val << std::endl; }
private:
  int val;
};

class AddNode {
public:
  AddNode(Literal* l, Literal* r) : left(l), right(r) {}
  Literal* eval() const { return *left + *right; }
  ~AddNode() { delete left; delete right; }
private:
  Literal* left;
  Literal* right;
};

class MulNode {
public:
  MulNode(Literal* l, Literal* r) : left(l), right(r) {}
  Literal* eval() const { return *left * *right; }
  ~MulNode() { delete left; delete right; }
private:
  Literal* left;
  Literal* right;
};

int main() {
  Literal* l = new IntLiteral(5);
  Literal* r = new FloatLiteral(2.5);
  AddNode node0(l, r);
  Literal* res = node0.eval();
  res->print();
  delete res;

  AddNode node1(new IntLiteral(4), new IntLiteral(5));
  Literal* result = node1.eval();
  result->print();
  delete result;

  MulNode node2(new IntLiteral(4), new FloatLiteral(5.2));
  result = node2.eval();
  result->print();
  delete result;
}
