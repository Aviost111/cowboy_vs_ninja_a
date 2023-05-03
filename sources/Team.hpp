#ifndef COWBOY_VS_NINJA_A_TEAM_HPP
#define COWBOY_VS_NINJA_A_TEAM_HPP
#include <cstring>
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

    class Team {

    };
    class Character {
    private:
        Point location;
        int shots;
        string name;
    };
    class OldNinja :private Character{

    };
    class youngNinja :private Character{

    };
    class TrainedNinja :private Character{

    };
    class Cowboy :private Character{

    };
}


#endif //COWBOY_VS_NINJA_A_TEAM_HPP
