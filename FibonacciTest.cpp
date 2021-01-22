//
// Created by Hualong Zhang on 2021/1/22.
//

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Fibonacci.h"

SCENARIO("Fibonacci", "Fibonacci") {
    GIVEN("calculate Fibonacci") {
        WHEN("input 0") {
            THEN("return 0") {
                CHECK(Fibonacci().calculate(0) == 0);
            }
        }
    }
}
