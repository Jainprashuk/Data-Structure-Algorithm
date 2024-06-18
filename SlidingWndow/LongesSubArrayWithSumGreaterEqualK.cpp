// largest subarray with sum less then or equal to K

#include <iostream>
#include <vector>
using namespace std;

int LongestSubarrayBrute(vector<int> arr, int k)
{
    int maxlen = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < arr.size(); j++)
        {
            sum = sum + arr[j];
            if (sum > k)
            {
                break;
            }
            maxlen = max(maxlen, j - i + 1);
        }
    }
    return maxlen;
}

int LongestSubarraySliding(vector<int> arr, int k) // time - O(2n)
{
    int start = 0;
    int end = 0;
    int sum = 0;
    int maxlen = 0;
    while (end < arr.size())
    {
        sum = sum + arr[end];
        while (sum > k)  // can use if instead of while to optimize it more -- time - O(2n)
        {
            sum = sum - arr[start];
            start++;
        }
        if (sum <= k)
        {
            maxlen = max(maxlen, end - start + 1);
        }
        end++;
    }
    return maxlen;
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6};
    int k = 10;

    cout << LongestSubarrayBrute(arr, k) << endl;
    cout << LongestSubarraySliding(arr, k) << endl;
}