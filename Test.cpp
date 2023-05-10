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
    CHECK((o.getSpeed() == 8));
    CHECK((o.getHitPoints() == 150));

    SUBCASE("Moving a ninja") {
        Point loc{30, 34};
        YountNinja c{"Mary", loc};
        o.move(&c);
        CHECK((o.getLocation() == loc));
    }

    SUBCASE("Slashing a character") {
        Point loc2{1, 1};
        YountNinja d{"Mary", loc2};
        o.slash(&d);
        CHECK((d.getHitPoints() < 100));
    }
}

TEST_CASE("Testing the TrainedNinja class") {
    Point p{50, 60};
    TrainedNinja t{"Alice", p};
    CHECK(t.getName() == "Alice");
    CHECK((t.getLocation() == p));
    CHECK((t.getSpeed() == 12));
    CHECK((t.getHitPoints() == 120));
    CHECK(t.isAlive());
}
//14
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
//20
TEST_CASE("Testing the Point class") {
    Point p1{1, 2};
    Point p2{3, 4};
    Point p3{2, 4};
    CHECK_THROWS(Point(-1, 3));
    CHECK_THROWS(Point(1, -3));

    SUBCASE("Testing the getDistance method") {
        double d = p1.distance(p2);
        CHECK((d == doctest::Approx(2.828)));
    }

    SUBCASE("Testing the move method") {
        p1.moveTowards(p1, p3, p1.distance(p3));
        CHECK((p1 == p2));
        CHECK_THROWS(p2.moveTowards(p2, p3, -5.543));
    }
}

TEST_CASE("Team class tests") {
    Point p1 = Point(0, 0);
    Point p2 = Point(10, 10);
    Point p3 = Point(20, 20);
    Cowboy *c1 = new Cowboy("John", p1);
    TrainedNinja *n1 = new TrainedNinja("Naruto", p2);
    OldNinja *n2 = new OldNinja("Yoda", p3);
    Team *team1 = new Team(c1);
    Cowboy *d1 = new Cowboy("John", p1);
    TrainedNinja *e1 = new TrainedNinja("Naruto", p2);
    OldNinja *e2 = new OldNinja("Yoda", p3);
    Team2 *secondTeam = new Team2(d1);
    Cowboy *b1 = new Cowboy("John", p1);
    TrainedNinja *a1 = new TrainedNinja("Naruto", p2);
    OldNinja *a2 = new OldNinja("Yoda", p3);
    SmartTeam *smartTeam = new SmartTeam(d1);

    SUBCASE("Add character") {
        team1->add(n1);
        secondTeam->add(e1);
        smartTeam->add(a1);
        CHECK_EQ(team1->stillAlive(), 2);
        CHECK_EQ(secondTeam->stillAlive(), 2);
        CHECK_EQ(smartTeam->stillAlive(), 2);
        team1->add(e2);
        secondTeam->add(e2);
        smartTeam->add(a2);
        CHECK_EQ(team1->stillAlive(), 3);
        CHECK_EQ(secondTeam->stillAlive(), 3);
        CHECK_EQ(smartTeam->stillAlive(), 3);
    }

    SUBCASE("Attack enemy team with Team") {
        Cowboy *c2 = new Cowboy("Mike", p1);
        TrainedNinja *n3 = new TrainedNinja("Sasuke", p2);
        Team *team2 = new Team(c2);
        team2->add(n3);
        team1->attack(team2);
        secondTeam->attack(team2);
        smartTeam->attack(team2);
        CHECK_EQ(team2->stillAlive(), 0);
    }

    SUBCASE("Still alive") {
        CHECK_EQ(team1->stillAlive(), 1);
        team1->add(n1);
        CHECK_EQ(team1->stillAlive(), 2);
        team1->add(n2);
        CHECK_EQ(team1->stillAlive(), 3);
        CHECK_EQ(secondTeam->stillAlive(), 1);
        secondTeam->add(e1);
        CHECK_EQ(secondTeam->stillAlive(), 2);
        secondTeam->add(e2);
        CHECK_EQ(secondTeam->stillAlive(), 3);
        CHECK_EQ(smartTeam->stillAlive(), 1);
        smartTeam->add(a1);
        CHECK_EQ(smartTeam->stillAlive(), 2);
        smartTeam->add(a2);
        CHECK_EQ(smartTeam->stillAlive(), 3);
    }

    SUBCASE("Set and get team leader") {
        Cowboy *c2 = new Cowboy("Mike", p1);
        team1->setLeader(c2);
        CHECK_EQ(team1->getLeader(), c2);
    }
}

//need to add tests for Team
//23
