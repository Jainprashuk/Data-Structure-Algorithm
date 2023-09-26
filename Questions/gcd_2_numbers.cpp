#include <iostream>
using namespace std;

// Function to find the GCD of two numbers using the Euclidean algorithm
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers to find their GCD: ";
    cin >> num1 >> num2;

    int gcd = findGCD(num1, num2);

    cout << "GCD of " << num1 << " and " << num2 << " is " << gcd << std::endl;

    return 0;
}
