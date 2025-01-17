#include "doctest.h"
#include "sources/MagicalContainer.hpp"
using namespace ariel;

TEST_CASE("Add/remove elements check"){
    SUBCASE("Add and check size"){
        MagicalContainer TheContainer;
        CHECK(TheContainer.size() == 0); //initialization check
        TheContainer.addElement(1);
        TheContainer.addElement(2);
        CHECK(TheContainer.size() == 2);
        TheContainer.addElement(3);
        CHECK(TheContainer.size() == 3);
    }
    SUBCASE("Remove and check size"){
        MagicalContainer TheContainer;
        TheContainer.addElement(1);
        TheContainer.addElement(2);
        CHECK(TheContainer.size() == 2);
        TheContainer.removeElement(2);
        CHECK(TheContainer.size() == 1);
        TheContainer.removeElement(1);
        CHECK(TheContainer.size() == 0);
    }
}

TEST_CASE("add/remove the same element check"){
    MagicalContainer TheContainer;
    SUBCASE("Add the same element and check if throw"){
        TheContainer.addElement(1);
        CHECK_THROWS (TheContainer.addElement(1));
        CHECK(TheContainer.size() == 1);
        TheContainer.addElement(2);
        CHECK_THROWS (TheContainer.addElement(2));
        CHECK(TheContainer.size() == 2);
    }
    SUBCASE("remove the same element and check if throw"){
        MagicalContainer TheContainer;
        TheContainer.addElement(1);
        TheContainer.addElement(2);
        CHECK(TheContainer.size() == 2);
        TheContainer.removeElement(1);
        CHECK(TheContainer.size() == 1);
        CHECK_THROWS(TheContainer.removeElement(1));
        CHECK(TheContainer.size() == 1);
    }
}


TEST_CASE("Exception Tests in adding/removing elements"){
    SUBCASE("Adding elements test"){
        MagicalContainer TheContainer;
        CHECK_NOTHROW(TheContainer.addElement(1));
        CHECK_NOTHROW(TheContainer.addElement(2));
        CHECK_NOTHROW(TheContainer.addElement(3));
        CHECK_NOTHROW(TheContainer.addElement(4));
    }
    SUBCASE("Removing elements test")
    {
        MagicalContainer TheContainer;
        TheContainer.addElement(5);
        TheContainer.addElement(6);
        TheContainer.addElement(7);
        CHECK_NOTHROW(TheContainer.removeElement(5));
        CHECK_NOTHROW(TheContainer.removeElement(6));
    }
}