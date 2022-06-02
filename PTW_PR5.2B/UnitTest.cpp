#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "Student.h"
#include <iostream>
#include <fstream>
#include <iomanip>

TEST_CASE( "Arguments initialized") {
    char path[100] = "/Users/mac/Desktop/Student/PTW/5/PTW_PR5.2B/PTW_PR5.2B/1.txt";
    REQUIRE( PhysicsFiveOrFour(path) == 2);
}
