/*
 * Mirzohid:
 * 23.11.2023:
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"
#include "task_6.h"
#include "task_7.h"





class Heap {
private:
    std::vector<int> array;

    void maxHeapify(int i, int heapSize);
    void buildMaxHeap();
    
public:
    Heap(const std::vector<int>& inputArray);
    
    void heapsort();
    void displayHeap();
};

Heap::Heap(const std::vector<int>& inputArray) : array(inputArray) {
    buildMaxHeap();
}

void Heap::maxHeapify(int i, int heapSize) {
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int largest = i;

    if (left < heapSize && array[left] > array[largest]) {
        largest = left;
    }

    if (right < heapSize && array[right] > array[largest]) {
        largest = right;
    }

    if (largest != i) {
        std::swap(array[i], array[largest]);
        maxHeapify(largest, heapSize);
    }
}

void Heap::buildMaxHeap() {
    int heapSize = array.size();

    for (int i = heapSize / 2 - 1; i >= 0; --i) {
        maxHeapify(i, heapSize);
    }
}

void Heap::heapsort() {
    int heapSize = array.size();

    buildMaxHeap();

    for (int i = heapSize - 1; i > 0; --i) {
        std::swap(array[0], array[i]);
        maxHeapify(0, i);
    }
}

void Heap::displayHeap() {
    for (const auto& element : array) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}



bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

std::string permuteString(const std::string& s) {
    std::vector<char> vowels;
    std::string result = s;

    for (char c : s) {
        if (isVowel(c)) {
            vowels.push_back(c);
        }
    }

    std::sort(vowels.begin(), vowels.end());
    size_t vowelIndex = 0;
    for (char& c : result) {
        if (isVowel(c)) {
            c = vowels[vowelIndex++];
        }
    }

    return result;
}



int main() {
    std::cout << "Task 1" << std::endl;
    int A, B;
    std::cout << "Enter the first integer (A): ";
    std::cin >> A;
    std::cout << "Enter the second integer (B): ";
    std::cin >> B;
    print_numbers_recursive(A, B);



    std::cout << "Task 2" << std::endl;
    int N;
    std::cout << "Enter a natural number (N): ";
    std::cin >> N;
    std::cout << (is_power_of_two(N) ? "YES" : "NO") << std::endl;



    std::cout << "Task 3" << std::endl;
    int N;
    std::cout << "Enter a natural number (N): ";
    std::cin >> N;
    std::cout << "Sum of digits: " << sum_of_digits(N) << std::endl;


    std::cout << "Task 4" << std::endl;
    int n;
    std::cout << "Enter a natural number greater than 1 (n): ";
    std::cin >> n;
    std::cout << (is_prime(n) ? "YES" : "NO") << std::endl;

    
    std::cout << "Task 5" << std::endl;
    std::string word;

    std::cout << "Enter a word: ";
    std::cin >> word;
    std::cout << (is_palindrome(word) ? "YES" : "NO") << std::endl;



    std::cout << "Task 6" << std::endl;
    int number;
    std::cout << "Enter a sequence of natural numbers, ending with 0:" << std::endl;
    int second_largest = find_second_largest();

    std::cout << "The second-largest element is: " << second_largest << std::endl;


    std::cout << "Task 7" << std::endl;

    int n;
    std::cout << "Enter a number without zeros: ";
    std::cin >> n;
    int reversed = reverse_digits(n);
    std::cout << "Reversed number: " << reversed << std::endl;


    std::cout << "Task 8" << std::endl;


    std::cout << "Task 9" << std::endl;
    std::vector<int> inputArray = {4, 10, 3, 5, 1};
    
    Heap heap(inputArray);

    std::cout << "Original array: ";
    heap.displayHeap();

    heap.heapsort();

    std::cout << "Sorted array: ";
    heap.displayHeap();



    std::cout << "Task 10" << std::endl;
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;
    std::string result = permuteString(s);
    std::cout << "Resulting string: " << result << std::endl;


}
