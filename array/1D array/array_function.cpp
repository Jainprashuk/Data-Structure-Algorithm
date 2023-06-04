#include <iostream>
using namespace std;

// all arrays are passed by refrence : no copy , operatons on actual array

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    cout << endl;
}

void increament_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        /* code */
        arr[i] = arr[i] + 10;
    }
    cout << "all elements increamented by 10 " << endl;
}

void linear_search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "element " << key << " found at index " << i << endl;
        }
    }
}

void count_0_1(int arr[], int size)
{
    int num0, num1;
    num0 = 0;
    num1 = 0;
    for (int i = 0; i < size; i++)
    {

        if (arr[i] == 0)
        {
            num0 = num0 + 1;
        }
        else if (arr[i] == 1)
        {
            num1 = num1 + 1;
        }
    }
    cout << "number of 0 :" << num0;
    cout << "number of 1 :" << num1;
}

void max_min_element(int arr[], int size)
{
    int max;
    int min;
    max = arr[0];
    min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << max;
    cout << min;
}

void print_extremities(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (true)
    {
        /* code */
        if (start > end)
        {
            /* code */
            break;
        }
        cout << arr[start];
        cout << arr[end];
        start++;
        end--;
    }
}

void reverse_array(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    print_array(arr, size);
}


int main()
{

    int arr[] = {1, 2, 3, 4, 5, 5, 71, 8, 9};
    int arr1[] = {0, 0, 1, 1, 0, 1, 0, 1, 0, 1, 2, 0, 1, 0, 1};

    // print_array(arr,9);

    // increament_array(arr,9);
    // print_array(arr,9);

    // linear_search(arr,9,59);

    // count_0_1(arr1, 15);

    // max_min_element(arr, 9);

    // print_extremities(arr, 9);

    // reverse_array(arr, 9);
}