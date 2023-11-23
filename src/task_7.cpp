#include "task_7.h"

int reverse_digits_helper(int n, int reversed);

int reverse_digits(int n) {
    return reverse_digits_helper(n, 0);
}

int reverse_digits_helper(int n, int reversed) {
    if (n == 0) {
        return reversed;
    }

    int last_digit = n % 10;
    reversed = reversed * 10 + last_digit;
    return reverse_digits_helper(n / 10, reversed);
}