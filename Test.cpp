#include "doctest.h"
#include "sources/Team.hpp"

using namespace ariel;

TEST_CASE("Testing the YountNinja class") {
    Point p{10, 20};
    YountNinja y{"John", p};
    CHECK(y.getName() == "John");
    CHECK((y.getLocation() == p));
    CHECK((y.getSpeed() == 14));
    CHECK((y.getHitPoints() == 100));
}

TEST_CASE("Testing the OldNinja class") {
    Point p{30, 40};
    OldNinja o{"Bob", p};
    CHECK(o.getName() == "Bob");
    CHECK((o.getLocation() == p));
    CHECK((o.getSpeed() == 12));
    CHECK((o.getHitPoints() == 120));
}

TEST_CASE("Testing the TrainedNinja class") {
    Point p{50, 60};
    TrainedNinja t{"Alice", p};
    CHECK(t.getName() == "Alice");
    CHECK((t.getLocation() == p));
    CHECK((t.getSpeed() == 8));
    CHECK((t.getHitPoints() == 150));
    CHECK(t.isAlive());
}
//12
TEST_CASE("Testing the Cowboy class") {
    Point p{70, 80};
    Cowboy c{"Bill", p};
    CHECK(c.getName() == "Bill");
    CHECK((c.getLocation() == p));
    CHECK((c.getAmmo() == 6));
    CHECK((c.getHitPoints() == 110));
    SUBCASE("Hitting a character") {
        c.hit(10);
        CHECK(c.isAlive());
        c.hit(100);
        CHECK(!c.isAlive());
    }
}
//18
TEST_CASE("Testing the Point class") {
    Point p1{1, 2};
    Point p2{3, 4};
    Point p3{2, 4};

    SUBCASE("Testing the getDistance method") {
        double d = p1.distance(p2);
        CHECK((d == doctest::Approx(2.828)));
    }

    SUBCASE("Testing the move method") {
        p1.moveTowards(p1, p3, p1.distance(p3));
        CHECK((p1 == p2));
    }
}
//20
