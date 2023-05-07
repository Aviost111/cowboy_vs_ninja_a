//
// Created by ASUS on 07/05/2023.
//

#ifndef COWBOY_VS_NINJA_A_POINT_HPP
#define COWBOY_VS_NINJA_A_POINT_HPP


namespace ariel {
    class Point {
    private:
        double x;
        double y;
    public:
        Point(double x, double y);

        Point();

        double getX() const;

        double getY() const;

    };


#endif //COWBOY_VS_NINJA_A_POINT_HPP
