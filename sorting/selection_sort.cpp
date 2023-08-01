#include <iostream>
#include <algorithm>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // int MinIndex = i;
        int MInElement = arr[i];
        
        for (int j = i + 1; j < n; j++)
        {
            // if (arr[j] < arr[MinIndex])
            // {
            //     MinIndex = j;
            // }

            if (arr[j]<MInElement)
            {
                MInElement = arr[j];
            }  
        }

        // swap(arr[i],arr[MinIndex]);
        swap(arr[i],MInElement);
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
    
}

int main()
{
    int arr[9] = {2, 21, 3, 32, 5, 61, 6, 71, 7};
    selection_sort(arr,9);
}