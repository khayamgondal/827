// http://sourcemaking.com/design_patterns/visitor/cpp/2#
#include <iostream>
#include <list>
#include "shape.h"
#include "visitor.h"
using std::list;

void print(const list<Shape*> & shapes) {
  list<Shape*>::const_iterator ptr = shapes.begin();
  (*ptr)->draw();
}

float getArea(const list<Shape*> & shapes, 
              AverageAreaVisitor & areaVisitor) {
  list<Shape*>::const_iterator ptr = shapes.begin();
  while ( ptr != shapes.end() ) {
    (*ptr)->accept(&areaVisitor);
    ++ptr;
  }
  return areaVisitor.getAvg();
}

int main() {
  list<Shape *> shapes;
  shapes.push_back(new Circle(3, 3, 5));
  shapes.push_back(new Rectangle(0, 0, 3, 4));
  shapes.push_back(new Circle(0, 0, 5));
  print(shapes);
  AverageAreaVisitor areaVisitor;
  float area = getArea(shapes, areaVisitor);
  cout << "area of all shapes is: " << area << endl;
}
