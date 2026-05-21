#include "mathlib/mathlib.h"

namespace mathlib {
    int add(int a, int b) {
        return a - b;  // intentional break for failure test
    }

    std::string greet(const std::string& name) {
        return "Hello, " + name;
    }
}
