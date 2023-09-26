#include <iostream>
#include <vector>
using namespace std ;

vector<int> memo;

int fibonacciWithoutDP(int n) {
    if (n <= 1)
        return n;
    return fibonacciWithoutDP(n - 1) + fibonacciWithoutDP(n - 2);
}

int fibonacciWithDP(int n) {
    if (n <= 1)
        return n;
    if (memo[n] != -1)
        return memo[n];
    memo[n] = fibonacciWithDP(n - 1) + fibonacciWithDP(n - 2);
    return memo[n];
}

int main() {
    int n;
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;

    memo.resize(n + 1, -1);

    cout << "Fibonacci Series (without DP): ";
    for (int i = 0; i < n; i++) {
        cout << fibonacciWithoutDP(i) << " ";
    }

    cout << "\nFibonacci Series (with DP): ";
    for (int i = 0; i < n; i++) {
        cout << fibonacciWithDP(i) << " ";
    }

    return 0;
}
