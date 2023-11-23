#include "task_1.h"
#include <iostream>

void print_numbers_recursive(int A, int B) {
    if (A == B) {
        std::cout << A << std::endl;
    } else {
        std::cout << A << std::endl;
        if (A < B) {
            print_numbers_recursive(A + 1, B);
        } else {
            print_numbers_recursive(A - 1, B);
        }
    }
}