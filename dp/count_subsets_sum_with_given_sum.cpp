// Naive Approach
#include <bits/stdc++.h>
using namespace std;

void printBool(int n, int len)
{

    while (n)
    {
        if (n & 1)
            cout << 1;
        else
            cout << 0;

        n >>= 1;
        len--;
    }

    // This is used for padding zeros
    while (len)
    {
        cout << 0;
        len--;
    }
    cout << endl;
}

// Function
// Prints all the subsets of given set[]
void printSubsetsCount(int set[], int n, int val)
{
    int sum; // it stores the current sum
    int count = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        sum = 0;
        // Print current subset
        for (int j = 0; j < n; j++)

            // (1<<j) is a number with jth bit 1
            // so when we 'and' them with the
            // subset number we get which numbers
            // are present in the subset and which are not
            if ((i & (1 << j)) > 0)
            {
                sum += set[j]; // elements are added one by
                               // one of a subset to the sum
            }
        // It checks if the sum is equal to desired sum. If
        // it is true then it prints the elements of the sum
        // to the output
        if (sum == val)
        {
            /*
             * Uncomment printBool(i,n) to get the boolean
             * representation of the selected elements from
             * set. For this example output of this
             * representation will be 0 1 1 1 0 // 2,3,4
             * makes sum 9 1 0 1 0 1 // 1,3,5 also makes sum
             * 9 0 0 0 1 1 // 4,5 also makes sum 9
             *
             * 'i' is used for 'and' operation so the
             * position of set bits in 'i' will be the
             * selected element. and as we have to give
             * padding with zeros to represent the complete
             * set , so length of the set ('n') is passed to
             * the function.
             * */
            // printBool(i,n);
            count++;
        }
    }
    
    // it means no subset is found with given sum
    if (count == 0)
    {
        cout << ("No subset is found") << endl;
    }
    else
    {
        cout << count << endl;
    }
}

// Driver code
int main()
{
    int set[] = {1, 2, 3, 4, 5};
    printSubsetsCount(set, 5, 9);
}
