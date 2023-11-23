#include "task_3.h"

int sum_of_digits(int N) {
    if (N < 10) {
        return N;
    } else {
        return N % 10 + sum_of_digits(N / 10);
    }
}