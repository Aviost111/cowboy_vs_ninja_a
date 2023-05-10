#ifndef COWBOY_VS_NINJA_A_NINJA_HPP
#define COWBOY_VS_NINJA_A_NINJA_HPP

#include "Character.hpp"

namespace ariel {
    class Ninja : public Character {
    protected:
        int speed;// NOLINT(cppcoreguidelines-non-private-member-variables-in-classes)
    public:
        Ninja();

        Ninja(std::string name, Point location);

//        ~Ninja()=default;

        void move(Character *enemy);

        void slash(Character *enemy);

        int getSpeed() const;

    };
}


#endif //COWBOY_VS_NINJA_A_NINJA_HPP
