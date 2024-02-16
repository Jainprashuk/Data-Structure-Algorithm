#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int minElementsToTargetSum(const vector<int>& arr, int target, int currentIndex, int currentSum, int included) {
    // Base case: if target sum is reached, return the number of included elements
    if (currentSum == target) {
        return included;
    }

    // Base case: if currentIndex exceeds array size or currentSum goes beyond target, return infinity
    if (currentIndex == arr.size() || currentSum > target) {
        return INT_MAX;
    }

    // Recursive case: include the current element
    int include = minElementsToTargetSum(arr, target, currentIndex + 1, currentSum + arr[currentIndex], included + 1);

    // Recursive case: exclude the current element
    int exclude = minElementsToTargetSum(arr, target, currentIndex + 1, currentSum, included);

    // Return the minimum of included and excluded
    return min(include, exclude);
}

int main() {
    // Example usage
    vector<int> arr = {1, 2,9, 3, 4, 5};
    int targetSum = 9;

    int result = minElementsToTargetSum(arr, targetSum, 0, 0, 0);

    if (result == INT_MAX) {
        cout << "Target sum cannot be achieved with the given array." << endl;
    } else {
        cout << "Minimum number of elements to reach target sum: " << result << endl;
    }

    return 0;
}
