#include "YoungNinja.hpp"

using namespace std;
namespace ariel{

    YoungNinja::YoungNinja() {

    }

    YoungNinja::YoungNinja(string name, Point location) : Ninja(std::move(name), location) {

    }

//    YoungNinja::~YoungNinja() {
//
//    }
}