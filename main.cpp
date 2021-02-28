#include <array>
#include "rogueutil.h"
#include "point.hpp"
#include "triangle.hpp"
using namespace std;

int main() {
    Triangle triforce(
        { Point(2, 3), Point(4, 6), Point(1, 5) },
        { 3.0, 4.0, 5.0 }
    );
    triforce.vertices_[0] = Point(3, 7);
    cout << "("  << triforce.getVertices()[0].getX() << ", " << triforce.getVertices()[0].getY() << ")" << endl;
}
