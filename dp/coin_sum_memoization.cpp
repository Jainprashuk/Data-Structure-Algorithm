#include <bits/stdc++.h>
using namespace std;


// to make the sum by using n coins
int count(vector<int>& coins, int n, int sum,
		vector<vector<int> >& dp)
{
	// Base Case
	if (sum == 0)
		return dp[n][sum] = 1;

	// If number of coins is 0 or sum is less than 0 then there is no way to make the sum.
	if (n == 0 || sum < 0)
		return 0;

	// If the subproblem is previously calculated then simply return the result
	if (dp[n][sum] != -1)
		return dp[n][sum];

	// Two options for the current coin
	return dp[n][sum]
		= count(coins, n, sum - coins[n - 1], dp)
			+ count(coins, n - 1, sum, dp);
}

int32_t main()
{
	int tc = 1;
	// cin >> tc;
	while (tc--) {
		int n, sum;
		n = 3, sum = 5;
		vector<int> coins = { 1, 2, 3 };
		// 2d dp array to store previously calculated results
		vector<vector<int> > dp(n + 1,vector<int>(sum + 1, -1));
		int res = count(coins, n, sum, dp);
		cout << res << endl;
	}
}
