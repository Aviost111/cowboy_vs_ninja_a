#include "Team.hpp"
#include <iostream>


using namespace std;
namespace ariel{


    Team::Team(Character *leader):leader(leader) {

    }

//    Team::~Team() {
//        delete this->leader;
////        for (Character* character : this->team) {
////            delete character;
////        }
//    }


    void Team::add(Character* character) {
//        bool added = false;
//        for (Character*& Char : team) {
//            if (Char == nullptr) {
//                Char = character;
//                added = true;
//                break;
//            }
//        }
//        if (!added) {
//            throw std::runtime_error("Team is full");
//        }
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

    std::array<Character*, teamSize> Team::getArr() {
        return std::array<Character*, teamSize>();
    }

    void Team::setArr(std::array<Character*, teamSize> team) {

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