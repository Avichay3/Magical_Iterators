#include "doctest.h"
#include "sources/MagicalContainer.hpp"
using namespace ariel;

TEST_CASE("Add/remove elements check"){
    SUBCASE("Add and check size"){
        MagicalContainer TheContainer;
        CHECK(TheContainer.size() == 0);
        TheContainer.addElement(1);
        TheContainer.addElement(2);
        CHECK(TheContainer.size() == 2);
    }
    SUBCASE("Remove and check size"){
        MagicalContainer TheContainer;
        TheContainer.addElement(1);
        TheContainer.addElement(2);
        CHECK(TheContainer.size() == 2);
        TheContainer.removeElement(2);
        CHECK(TheContainer.size() == 1);
    }
}

