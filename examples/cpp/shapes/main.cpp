#include <iostream>
#include <vector>
#include <string>

class Shape {
public:
  Shape(const std::string& n) : name(n) {}
  const std::string& getName() const { return name; }
  virtual float area() const = 0;
private:
  std::string name;
};

class Circle : public Shape {
public:
  Circle(const std::string& n, float r) : Shape(n), radius(r) {}
  virtual float area() const { return 3.14*radius*radius; } 
private:
  float radius;
};

void printAreas(const std::vector<Shape*>& shapes) {
}

int main() {
  std::vector<Shape*> shapes;
  shapes.push_back( new Circle("circle", 5.0) );
  printAreas(shapes);
}
