// can use this approach in question : 
// 1 - subset sum 
// 2 - equal subset sum partition
// 3 - min subset sum diff

#include <iostream>
#include <vector>
using namespace std;

int knapsack(int capacity, const vector<int>& weights, const vector<int>& values, int index) {
    // Base case: if there are no items or the capacity is 0
    if (index == weights.size() || capacity == 0) {
        return 0;
    }

    // If the weight of the current item is more than the capacity,
    // then this item cannot be included in the optimal solution
    if (weights[index] > capacity) {
        return knapsack(capacity, weights, values, index + 1);
    }

    // Consider the maximum value of either including or excluding the current item
    int include = values[index] + knapsack(capacity - weights[index], weights, values, index + 1);
    int exclude = knapsack(capacity, weights, values, index + 1);

    // Return the maximum value
    return max(include, exclude);
}

int knapsackviaMemoization(int capacity, const vector<int>& weights, const vector<int>& values, int index ,vector<vector<int>> &dp) {
    // Base case: if there are no items or the capacity is 0
    if (index == weights.size() || capacity == 0) {
        return 0;
    }

    if(dp[index][capacity] != -1){
        return dp[index][capacity];
    }

    // If the weight of the current item is more than the capacity,
    // then this item cannot be included in the optimal solution
    if (weights[index] > capacity) {
        return knapsackviaMemoization(capacity, weights, values, index + 1 , dp);
    }

    // Consider the maximum value of either including or excluding the current item
    int include = values[index] + knapsackviaMemoization(capacity - weights[index], weights, values, index + 1 , dp);
    int exclude = knapsackviaMemoization(capacity, weights, values, index + 1 , dp);

    // Return the maximum value
    dp[index][capacity] =  max(include, exclude);
    return dp[index][capacity];
}

int main() {
    vector<int> weights = {4,5,1};
    vector<int> values = {1,2,3};
    int capacity = 4;
    int n = weights.size();

    // int result = knapsack(capacity, weights, values, 0);
    

    vector<vector<int>>dp(n , vector<int>(capacity+1  , -1));
    int result = knapsackviaMemoization(capacity, weights, values, 0 , dp);
    
    cout << "Maximum value: " << result << endl;

    return 0;
}

