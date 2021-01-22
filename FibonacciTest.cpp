//
// Created by Hualong Zhang on 2021/1/22.
//

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

SCENARIO("Fibonacci", "Fibonacci") {
    GIVEN("calculate Fibonacci") {
        WHEN("input 0") {
            THEN("return 0") {
                Fibonacci fibonacci;
                int64_t ret = fibonacci.calculate(0);
                CHECK(ret == 0);
            }
        }
    }
}
