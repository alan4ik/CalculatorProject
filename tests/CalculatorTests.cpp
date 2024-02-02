// CalculatorTests.cpp
#define CATCH_CONFIG_MAIN  // Это говорит Catch создать main
#include "../../external/catch2/catch.hpp"
#include "../src/Calculator.h"

TEST_CASE("Addition works", "[calculator]") {
    Calculator calc;
    REQUIRE(calc.add(1, 1) == 2);
}

TEST_CASE("Subtraction works", "[calculator]") {
    Calculator calc;
    REQUIRE(calc.subtract(5, 3) == 2);
}

TEST_CASE("test", "[calculator]") {
    REQUIRE(1 == 1);
}

// Дополнительные тесты...
