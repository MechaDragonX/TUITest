#include <array>
#include <iostream>
#include "rogueutil.h"
#include "point.hpp"
#include "triangle.hpp"
using namespace std;

int main() {
    Point a(2.0, 3.0);
    Point b(1.0, 5.0);
    Point c(4.0, 6.0);
    Triangle triforce(
        { a, b, c },
        { Point::distance(b, c), Point::distance(a, c), Point::distance(a, b) }
    );
}
