#ifndef COWBOY_VS_NINJA_A_COWBOY_HPP
#define COWBOY_VS_NINJA_A_COWBOY_HPP

#include "Character.hpp"

namespace ariel {
    class Cowboy : public Character {
    private:
        int bulletCount;
    public:
        Cowboy();
        Cowboy(std::string name, Point location);

        void shoot(Character *enemy);
        bool hasboolets();
        void reload();
        int getAmmo() const;
    };
}

#endif //COWBOY_VS_NINJA_A_COWBOY_HPP
