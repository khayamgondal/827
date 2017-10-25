#include <iostream>
#include "shape.h"
#include "visitor.h"
using std::ostream;
using std::cout; using std::endl;

const Vector2f& Shape::getCoord() const { return position; }

void Rectangle::draw() const {
  cout << "Rectangle: " << width << " by " << height << endl;
  cout << "Upper left corner at: " << getCoord() << endl;
}
void Rectangle::accept(Visitor * const v) { v->visit(this); }
void Circle::accept(Visitor * const v) { v->visit(this); }


void Circle::draw() const {
  cout << "Circle of radius: " << radius << endl;
  cout << "Radius at: " << getCoord() << endl;
}
