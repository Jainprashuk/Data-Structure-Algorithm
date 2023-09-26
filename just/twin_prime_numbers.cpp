#include <bits/stdc++.h>
using namespace std;

void printTwinPrime(int n)
{
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= n; p++) {
		if (prime[p] == true) {
			for (int i = p * 2; i <= n; i += p)
				prime[i] = false;
		}
	}

	for (int p = 2; p <= n - 2; p++)
		if (prime[p] && prime[p + 2])
			cout << "(" << p << ", " << p + 2 << ")" ;
}

int main()
{
	int n = 252;
	
	printTwinPrime(n);

	return 0;
}
