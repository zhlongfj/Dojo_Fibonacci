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
        WHEN("input 1 or 2") {
            THEN("return 1") {
                CHECK(Fibonacci().calculate(1) == 1);
                CHECK(Fibonacci().calculate(2) == 1);
            }
        }

        WHEN("input from 3 to 24") {
            THEN("return pre plus pre pre") {
                CHECK(Fibonacci().calculate(3) == 2);
                CHECK(Fibonacci().calculate(24) == 46368);
            }
        }
    }
}
