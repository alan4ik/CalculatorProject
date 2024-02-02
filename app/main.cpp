// main.cpp
#include <iostream>
#include "../src/Calculator.h"

int main() {
    Calculator calc;
    std::cout << "3 + 4 = " << calc.add(3, 4) << std::endl;
    // Другие примеры использования...
    return 0;
}
