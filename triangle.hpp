#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include <array>
#include "point.hpp"
using namespace std;

class Triangle {
    private:
        array<Point, 3> vertices_;
        array<double, 3> sides_;
    public:
        Triangle();
        Triangle(array<Point, 3> vertices, array<double, 3> sides);

        array<Point, 3> getVertices();
        void setVertices(array<Point, 3> vertices);
        array<double, 3> getSides();
        void setSides(array<double, 3> sides);
};

#endif
