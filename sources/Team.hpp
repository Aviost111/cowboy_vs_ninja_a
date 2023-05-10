#ifndef COWBOY_VS_NINJA_A_TEAM_HPP
#define COWBOY_VS_NINJA_A_TEAM_HPP
#include <cstring>
#include "YountNinja.hpp"
#include "OldNinja.hpp"
#include "TrainedNinja.hpp"
#include "Cowboy.hpp"
#include "Point.hpp"
#include <array>
const int teamSize=10;
namespace ariel {
    class Team {
    private:
        std::array<Character,teamSize>team;
        Character *leader;
    public:
        Team(Character* leader);
//        ~Team()=default;
        void add(Character *character);
        void attack(Team *enemyTeam);
        int stillAlive() const;
        void print();
    };

}


#endif //COWBOY_VS_NINJA_A_TEAM_HPP
