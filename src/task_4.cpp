#include "task_4.h"

bool is_prime(int n, int divisor) {
    if (n <= 2) {
        return true;
    }

    if (divisor * divisor > n) {
        return true;
    }

    if (n % divisor == 0) {
        return false;
    }

    return is_prime(n, divisor + 1);
}