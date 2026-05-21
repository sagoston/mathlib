add_executable(test_mathlib test_mathlib.cpp)
target_link_libraries(test_mathlib PRIVATE mathlib::mathlib)
add_test(NAME test_mathlib COMMAND test_mathlib)
