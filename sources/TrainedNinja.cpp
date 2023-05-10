#include "TrainedNinja.hpp"

using namespace std;
namespace ariel{

    TrainedNinja::TrainedNinja() {

    }

    TrainedNinja::TrainedNinja(string name, Point location) : Ninja(std::move(name), location)
    {
        this->speed=12;
        this->hitPoints=120;
    }

//    TrainedNinja::~TrainedNinja() {
//
//    }
}