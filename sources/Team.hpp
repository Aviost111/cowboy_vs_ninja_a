#ifndef COWBOY_VS_NINJA_A_TEAM_HPP
#define COWBOY_VS_NINJA_A_TEAM_HPP

#include <cstring>
#include "YoungNinja.hpp"
#include "OldNinja.hpp"
#include "TrainedNinja.hpp"
#include "Cowboy.hpp"
#include "Point.hpp"
#include <array>

const int teamSize = 10;
namespace ariel {
    class Team {
    private:
        std::array <Character*, teamSize> team;
        Character* leader;
    public:
        Team(Character* leader);
        virtual ~Team()=default;

        void add(Character* character);

        virtual void attack(Team* enemyTeam);

        int stillAlive() const;

        virtual void print();

        void leaderDead();

        void setArr(std::array<Character*, teamSize> team);

        std::array<Character*, teamSize> getArr();

        void setLeader(Character* leader);

        Character* getLeader();

//        Team(const Team&) = delete;
//        Team& operator=(const Team&) = delete;
//        Team(Team&&) = delete;
//        Team& operator=(Team&&) = delete;
    };

    class Team2 : public Team {
    public:
        Team2(Character* leader);

        void attack(Team* enemyTeam) override;

        void print() override;
    };

    class SmartTeam : public Team {
    public:
        SmartTeam(Character* leader);

        void attack(Team* enemyTeam) override;

        void print() override;
    };

}


#endif //COWBOY_VS_NINJA_A_TEAM_HPP
