#include "task_2.h"

bool is_power_of_two(int N) {

    if (N == 1) {
        return true;
    } else if (N % 2 == 1 || N == 0) {
        return false;  
    } else {
        return is_power_of_two(N / 2);
    }
}