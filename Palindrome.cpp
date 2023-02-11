#include <iostream>
#include <cstring>

bool isPalindrome(int num) {
    if (num < 0) return false;

    int originalNum = num;
    long long reverseNum = 0;

    while (num != 0) {
        reverseNum = reverseNum * 10 + num % 10;
        num /= 10;
    }

    return originalNum == reverseNum;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isPalindrome(num)) {
        std::cout << num << " is a palindrome." << std::endl;
    } else {
        std::cout << num << " is not a palindrome." << std::endl;
    }

    return 0;
}
