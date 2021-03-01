#ifndef POINT_HPP
#define POINT_HPP

class Point {
    private:
        int x_;
        int y_;
    public:
        Point();
        Point(int x, int y);

        int getX();
        void setX(int x);
        int getY();
        void setY(int y);

        static double distance(Point one, Point two);
        double distance(Point point);
};

#endif
