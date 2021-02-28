#include <array>
#include "point.hpp"
#include "triangle.hpp"
using namespace std;

Triangle::Triangle() {
    vertices_ = {};
    sides_ = {};
}
Triangle::Triangle(array<Point, 3> vertices, array<double, 3> sides) {
    vertices_ = vertices;
    sides_ = sides;
}

array<Point, 3> Triangle::getVertices() {
    return vertices_;
}
void Triangle::setVertices(array<Point, 3> vertices) {
    vertices_ = vertices;
}
array<double, 3> Triangle::getSides() {
    return sides_;
}
void Triangle::setSides(array<double, 3> sides) {
    sides_ = sides;
}
