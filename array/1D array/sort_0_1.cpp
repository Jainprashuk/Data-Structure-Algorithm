// there is an array with lots of 0 and 1 so we need all zero one side all 1 at another side

#include <iostream>
#include <vector>
using namespace std;
void Swap(int *x,
                      int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void sort(vector<int> brr)
{
    int start = 0;
    int end = brr.size() - 1;
    int i = 0;

    while (i < brr.size())
    {
        if (brr[i] == 0)
        {
            /* code */
            swap(brr[start], brr[i]);
            i++;
            start++;
        }
        if (brr[i] == 1)
        {
            /* code */
            Swap(&brr[i], &brr[end]);
            end--;
            i++;
        }
    }

    for (int i = 0; i < brr.size(); i++)
    {
        /* code */
        cout<<brr[i];
    }
    
}

int main()
{
    int n;
    cout << "enter no of elements is array : ";
    cin >> n;

    vector<int> arr(n);
    cout << "enter the elements :";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    sort(arr);
}