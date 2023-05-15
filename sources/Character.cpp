#include "Character.hpp"
using namespace std;
namespace ariel{

    Character::Character(string name,Point location)
    :location(location),name(std::move(name)),hitPoints(10) {

    }

    Character::Character() {

    }

//    Character::~Character() {
//        delete this;
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

    string Character::print() const{
        return {};
    }

    int Character::getHitPoints() const {
        return 0;
    }

    void Character::setLocation(const Point &location) {
        Character::location = location;
    }

    void Character::setHitPoints(int hitPoints) {
        Character::hitPoints = hitPoints;
    }

    void Character::setName(const string &name) {
        Character::name = name;
    }
}