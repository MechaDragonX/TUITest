#include <cmath>
#include "point.hpp"

Point::Point() {
    x_ = 0;
    y_ = 0;
}
Point::Point(double x, double y) {
    x_ = x;
    y_ = y;
}

double Point::getX() {
    return x_;
}
void Point::setX(double x) {
    x_ = x;
}
double Point::getY() {
    return y_;
}
void Point::setY(double y) {
    y_ = y;
}

double Point::distance(Point one, Point two) {
    return sqrt(((two.getX() - one.getX()) * (two.getX() - one.getX())) + ((two.getY() - one.getY()) * (two.getY() - one.getY())));
}
double Point::distance(Point point) {
    return sqrt(((point.getX() - x_) * (point.getX() - x_)) + ((point.getY() - y_) * (point.getY() - y_)));
}
