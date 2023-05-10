#ifndef COWBOY_VS_NINJA_A_CHARACTER_HPP
#define COWBOY_VS_NINJA_A_CHARACTER_HPP

#include "Point.hpp"
#include <string>


namespace ariel {
    class Character {
    protected:
        Point location;// NOLINT(cppcoreguidelines-non-private-member-variables-in-classes)
        int hitPoints;// NOLINT(cppcoreguidelines-non-private-member-variables-in-classes)
        std::string name;// NOLINT(cppcoreguidelines-non-private-member-variables-in-classes)
    public:
        Character(std::string name,Point location);

        Character();

//        ~Character()=default;

        bool isAlive();

        double distance(Character character) const;

        void hit(int damage);

        int getHitPoints() const;

        std::string getName() const;

        Point getLocation();

        void print();
    };
}

#endif //COWBOY_VS_NINJA_A_CHARACTER_HPP
