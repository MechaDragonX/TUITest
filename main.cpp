#include <array>
#include <iostream>
#include "rogueutil.h"
#include "point.hpp"
#include "triangle.hpp"
using namespace std;

int main() {
    Point a(2, 3);
    Point b(1, 5);
    Point c(4, 6);
    Triangle triforce(
        { a, b, c },
        { Point::distance(b, c), Point::distance(a, c), Point::distance(a, b) }
    );
}
