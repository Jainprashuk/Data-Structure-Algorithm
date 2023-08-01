#include <iostream>
#include <algorithm>
using namespace std;

void reverse_array_1(int arr[], int size)
{
    int reversedArray[size]; // Create an auxiliary array of the same size

    // Copy elements from original array to auxiliary array in reverse order
    for (int i = 0; i < size; i++)
    {
        reversedArray[i] = arr[size - 1 - i];
    }

    // Copy elements from auxiliary array back to original array
    for (int i = 0; i < size; i++)
    {
        arr[i] = reversedArray[i];
    }

cout<<endl<<"way 1"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << reversedArray[i] << " ";
    }
}

void reverse_array_2(int arr[], int size)
{
    int start = 0;      // Pointer to the start of the array
    int end = size - 1; // Pointer to the end of the array

    while (start < end)
    {
        // Swap elements at start and end pointers
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the pointers
        start++;
        end--;
    }

cout<<endl<<"way 2"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void reverse_array_3(int arr[], int size)
{
    std::reverse(arr, arr + size);

    // Print the reversed array
    cout<<endl<<"way 3"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "enter size of an array : ";
    cin >> n;

    int arr[n];

    cout << "enter elements of an array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // reverse_array_1(arr, n);
    // reverse_array_2(arr, n);
    // reverse_array_3(arr, n);
}