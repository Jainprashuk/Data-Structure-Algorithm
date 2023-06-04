#include <iostream>
using namespace std;
int main()
{

    // initialization :
    int arr[10];
    int arr1[] = {1, 2, 4, 3, 2, 2, 4};
    int arr2[7] = {1, 2, 4, 3, 2, 2, 4};
    int arr3[10] = {1, 2, 4, 3, 2, 2, 4};

    int n;
    int arr6[n]; // not suggested

    cout << "enter 10 elements : ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr << "  ";
        cout << 2* arr[i] << "  ";
        cout << &arr << endl;
    }
}