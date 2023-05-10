#include "Character.hpp"
using namespace std;
namespace ariel{

    Character::Character(string name,Point location)
    :location(location),name(std::move(name)),hitPoints(10) {

    }

    Character::Character() {

    }

//    Character::~Character() {
//
//    }

    bool Character::isAlive() {
        return false;
    }

    double Character::distance(Character character) const {
        return 0;
    }

    void Character::hit(int damage) {

    }

    std::string Character::getName() const {
        return string();
    }

    Point Character::getLocation() {
        return Point();
    }

    void Character::print() {

    }

    int Character::getHitPoints() const {
        return 0;
    }
}