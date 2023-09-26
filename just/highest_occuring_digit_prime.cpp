#include <iostream>
#include <vector>

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }

    return true;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    std::vector<int> primeNumbers;

    // Generate prime numbers from 1 to n
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            primeNumbers.push_back(i);
        }
    }

    // Count occurrences of each digit
    std::vector<int> digitCount(10, 0);

    for (int prime : primeNumbers) {
        int num = prime;
        while (num > 0) {
            digitCount[num % 10]++;
            num /= 10;
        }
    }

    // Find the digit with the highest count
    int highestDigit = 0;
    int highestCount = 0;

    for (int i = 1; i < 10; i++) {
        if (digitCount[i] > highestCount) {
            highestCount = digitCount[i];
            highestDigit = i;
        }
    }

    std::cout << "The highest occurring digit in prime numbers from 1 to " << n << " is: " << highestDigit << std::endl;

    return 0;
}
