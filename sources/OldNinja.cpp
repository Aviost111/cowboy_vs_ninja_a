#include "OldNinja.hpp"

using namespace std;
namespace ariel{

    OldNinja::OldNinja() {

    }

    OldNinja::OldNinja(string name, Point location) : Ninja(std::move(name), location) {

    }

//    OldNinja::~OldNinja() {
//
//    }
}
