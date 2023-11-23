#include "task_5.h"

bool is_palindrome(const std::string& word) {
    if (word.empty() || word.length() == 1) {
        return true;
    }

    if (word.front() != word.back()) {
        return false; 
    }

    return is_palindrome(word.substr(1, word.length() - 2));
}