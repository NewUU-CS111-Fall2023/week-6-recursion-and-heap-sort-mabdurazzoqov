#include "task_6.h"
#include <iostream>

int find_second_largest_helper(int current, int largest, int second_largest);

int find_second_largest() {
    int number;

    std::cin >> number;
    int largest = number;

    std::cin >> number;
    int second_largest = (number > largest) ? largest : number;
    largest = (number > largest) ? number : largest;

    find_second_largest_helper(number, largest, second_largest);

    return second_largest;
}

int find_second_largest_helper(int current, int largest, int second_largest) {
    if (current == 0) {
        return 0;  
    }


    if (current > largest) {
        second_largest = largest;
        largest = current;
    } else if (current > second_largest) {
        second_largest = current;
    }

    std::cin >> current;
    return find_second_largest_helper(current, largest, second_largest);
}