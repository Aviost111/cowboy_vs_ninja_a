#include "Cowboy.hpp"

using namespace std;
namespace ariel{

    Cowboy::Cowboy() {

    }

    Cowboy::Cowboy(std::string name, Point location) : Character(std::move(name), location) {

    }

//    Cowboy::~Cowboy() {
//
//    }

    void Cowboy::shoot(Character *enemy) {

    }

    bool Cowboy::hasboolets() {
        return false;
    }

    void Cowboy::reload() {

    }

    int Cowboy::getAmmo() const {
        return 0;
    }
}