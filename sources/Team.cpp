#include "Team.hpp"

using namespace std;
namespace ariel{


    Team::Team(Character *leader):leader(leader) {

    }

//    Team::~Team() {
//
//    }

    void Team::add(Character *character) {

    }

    void Team::attack(Team *enemyTeam) {

    }

    int Team::stillAlive() const {
        return 0;
    }

    void Team::print() {

    }

    Character *Team::getLeader() {
        return nullptr;
    }

    void Team::setLeader(Character *leader) {

    }

    std::array<Character, teamSize> Team::getArr() {
        return std::array<Character, teamSize>();
    }

    void Team::setArr(std::array<Character, teamSize> team) {

    }

    Team2::Team2(Character *leader) : Team(leader) {

    }

    void Team2::attack(Team *enemyTeam) {
        Team::attack(enemyTeam);
    }

    void Team2::print() {
        Team::print();
    }

    SmartTeam::SmartTeam(Character *leader) : Team(leader) {

    }

    void SmartTeam::attack(Team *enemyTeam) {
        Team::attack(enemyTeam);
    }

    void SmartTeam::print() {
        Team::print();
    }
}