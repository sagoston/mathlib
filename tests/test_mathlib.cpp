#include "mathlib/mathlib.h"
#include <cassert>
#include <iostream>

int main() {
    assert(mathlib::add(2, 3) == 5);
    assert(mathlib::add(-1, 1) == 0);
    assert(mathlib::greet("world") == "Hello, world");
    std::cout << "all mathlib tests passed\n";
    return 0;
}
