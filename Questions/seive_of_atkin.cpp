#include <iostream>
#include <vector>
#include <cmath>

void sieveOfAtkin(int limit) {
    if (limit > 2)
        std::cout << 2 << " ";

    if (limit > 3)
        std::cout << 3 << " ";

    std::vector<bool> isPrime(limit + 1, false);
    for (int x = 1; x * x <= limit; x++) {
        for (int y = 1; y * y <= limit; y++) {
            int n = (4 * x * x) + (y * y);
            if (n <= limit && (n % 12 == 1 || n % 12 == 5))
                isPrime[n] = !isPrime[n];

            n = (3 * x * x) + (y * y);
            if (n <= limit && n % 12 == 7)
                isPrime[n] = !isPrime[n];

            n = (3 * x * x) - (y * y);
            if (x > y && n <= limit && n % 12 == 11)
                isPrime[n] = !isPrime[n];
        }
    }

    for (int r = 5; r * r <= limit; r++) {
        if (isPrime[r]) {
            for (int i = r * r; i <= limit; i += r * r)
                isPrime[i] = false;
        }
    }

    for (int i = 5; i <= limit; i++) {
        if (isPrime[i])
            std::cout << i << " ";
    }
}

int main() {
    int limit;
    std::cout << "Enter the limit for prime generation: ";
    std::cin >> limit;

    std::cout << "Prime numbers up to " << limit << " are:\n";
    sieveOfAtkin(limit);

    return 0;
}
