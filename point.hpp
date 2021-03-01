#ifndef POINT_HPP
#define POINT_HPP

class Point {
    private:
        double x_;
        double y_;
    public:
        Point();
        Point(double x, double y);

        double getX();
        void setX(double x);
        double getY();
        void setY(double y);

        static double distance(Point one, Point two);
        double distance(Point point);
        static Point midpoint(Point one, Point two);
        Point midpoint(Point point);
};

#endif
