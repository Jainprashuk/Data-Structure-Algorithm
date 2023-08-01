#include<iostream>
#include<algorithm>
using namespace std;

void BubbleSort(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int arr[9] = {2, 21, 3, 32, 5, 61, 6, 71, 7};
    BubbleSort(arr,9);
}