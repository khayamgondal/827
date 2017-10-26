
class Literal : public Node {
public:
  virtual ~Literal() {}

  virtual Literal* operator+(Literal& rhs)=0;
  virtual Literal* opPlus(float)=0;
  virtual Literal* opPlus(int)=0;

  virtual Literal* operator*(Literal& rhs)=0;
  virtual Literal* opMult(float)=0;
  virtual Literal* opMult(int)=0;

  virtual Literal* operator-(Literal& rhs)=0;
  virtual Literal* opSubt(float)=0;
  virtual Literal* opSubt(int)=0;

  virtual Literal* operator/(Literal& rhs)=0;
  virtual Literal* opDiv(float)=0;
  virtual Literal* opDiv(int)=0;

  virtual Literal* eval() const = 0;
  virtual void print() const { 
    std::cout << "No Way" << std::endl; 
  }
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
    return new FloatLiteral(lhs + val);
  }

  virtual Literal* operator-(Literal& rhs) {
    return rhs.opSubt(val);
  }
  virtual Literal* opSubt(float lhs) {
    return new FloatLiteral(lhs - val);
  }
  virtual Literal* opSubt(int lhs) {
    return new FloatLiteral(lhs - val);
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

  virtual Literal* operator/(Literal& rhs) {
    return rhs.opDiv(val);
  }
  virtual Literal* opDiv(float lhs) {
    return new FloatLiteral(lhs / val);
  }
  virtual Literal* opDiv(int lhs) {
    return new FloatLiteral(lhs / val);
  }

  virtual Literal* eval() const { return new FloatLiteral(val); }
  virtual void print() const { 
    std::cout << "FLOAT: " << val << std::endl; 
  }
private:
  float val;
};

class IntLiteral: public Literal {
public:
 IntLiteral(int _val): val(_val) {}

  virtual Literal* operator+(Literal& rhs) {
    return rhs.opPlus(val);
  }
  virtual Literal* opPlus(float lhs) {
    return new FloatLiteral(static_cast<float>(val) + lhs);
  }
  virtual Literal* opPlus(int lhs) {
    return new IntLiteral(lhs + val);
  }

  virtual Literal* operator-(Literal& rhs) {
    return rhs.opSubt(val);
  }
  virtual Literal* opSubt(float lhs) {
    return new FloatLiteral(lhs - val);
  }
  virtual Literal* opSubt(int lhs) {
    return new IntLiteral(lhs - val);
  }

  virtual Literal* operator*(Literal& rhs) {
    return rhs.opMult(val);
  }
  virtual Literal* opMult(float lhs) {
    return new FloatLiteral(lhs * val);
  }
  virtual Literal* opMult(int lhs) {
    return new IntLiteral(lhs * val);
  }

  virtual Literal* operator/(Literal& rhs) {
    return rhs.opDiv(val);
  }
  virtual Literal* opDiv(float lhs) {
    return new FloatLiteral(lhs / val);
  }
  virtual Literal* opDiv(int lhs) {
    return new IntLiteral(lhs / val);
  }

  virtual Literal* eval() const { return new IntLiteral(val); }
  virtual void print() const { 
    std::cout << "INT: " << val << std::endl; 
  }
private:
  int val;
};

