#include "Point.hpp"


namespace ariel{
Point::Point(double pointX, double pointY) {
}

Point::Point() {

}

Point Point::moveTowards(Point src, Point dst, double distance) {
    return Point();
}

void Point::print() {

}

double Point::getY() const {
    return 0;
}

double Point::getX() const {
    return 0;
}

double Point::distance(Point point) const {
    return 0;
}

    bool operator==(const Point &pointA, const Point &pointB) {
        if((pointA.getX()==pointB.getX())&&(pointA.getY()==pointB.getY())){
            return true;
        }
        return false;
    }


}