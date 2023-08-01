#include <iostream>
#include <algorithm>
using namespace std;

void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > key)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }

        arr[j + 1] = key;
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[9] = {2, 21, 3, 32, 5, 61, 6, 71, 7};
    InsertionSort(arr, 9);
}