#include "Ninja.hpp"

using namespace std;
namespace ariel{

    Ninja::Ninja() {

    }

    Ninja::Ninja(string name, Point location) : Character(std::move(name), location) {

    }

//    Ninja::~Ninja() {
//
//    }

    void Ninja::move(Character *enemy) {

    }

    void Ninja::slash(Character *enemy) {

    }

    int Ninja::getSpeed() const {
        return 0;
    }
}
