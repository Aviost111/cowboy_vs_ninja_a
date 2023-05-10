#ifndef COWBOY_VS_NINJA_A_POINT_HPP
#define COWBOY_VS_NINJA_A_POINT_HPP


namespace ariel {
    class Point {
    private:
        double pointX;
        double pointY;
    public:
        Point(double pointX, double pointY);

        Point();

        double distance(Point point) const;

        double getX() const;

        double getY() const;

        void print();

        Point moveTowards(Point src, Point dst, double distance);

        friend bool operator==(const Point &pointA, const Point &pointB);
    };
}

#endif //COWBOY_VS_NINJA_A_POINT_HPP
