#include <iostream>
using namespace std;

void print_array(int brr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) // Corrected termination condition
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
}

void row_sum(int brr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum = sum + brr[i][j];
        }
        cout << sum << endl;
    }
}

void col_sum(int brr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum = sum + brr[j][i];
        }
        cout << sum << endl;
    }
}

void max_element(int arr[3][3])
{

    int max = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    cout << "max element is : " << max << endl;
}

void min_element(int arr[3][3])
{

    int min = arr[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    cout << "min element is : " << min << endl;
}

void transpose(int brr[3][3]  )
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j]=brr[j][i];
        }
    }
    print_array(arr);
}




int main()
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) // Corrected termination condition
        {
            cin >> arr[i][j];
        }
    }

    print_array(arr);
    row_sum(arr);
    col_sum(arr);
    max_element(arr);
    min_element(arr);
    transpose(arr);

    return 0;
}
