// pivot element : both side element are either greater or smaller 
// or where the graph changes 

#include<iostream>
#include<vector>
using namespace std;

void linear_pivot(int arr[] , int size){
    for (int i = 1; i < size-1; i++)
    {
        if (arr[i]>arr[i+1] && arr[i]>arr[i-1] )
        {
            cout<<"pivot element is :" <<arr[i];
        }
        else if (arr[i]<arr[i+1] && arr[i]<arr[i-1])
        {
            cout<<"pivot element is :" <<arr[i];
        }
    }
}

int binary_pivot(int arr[] , int size){

    int start = 0;
    int ans;
    int end = size-1;
    // int mid = (start+end)/2;
    int mid=start+(end-start)/2;

    while (start <= end)
    {
        if (mid+1 > 10 && arr[mid]>arr[mid+1])
        {
            /* code */
            return arr[mid];
        }
        if (mid-1 >= 0 && arr[mid-1]>arr[mid])
        {
            /* code */
            return arr[mid -1];
        }
        
        if (arr[start]>= arr[mid])
        {
            /* code */
            end = mid -1;
        }
        else{
            start = mid -1 ; 
            mid = start + (end-start)/2;
        }
        
        
    }
    return -1;
}

int main(){
    int arr[10];

    cout<<"enter array elements : ";
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    linear_pivot(arr,10);
    cout<<"pivot element is : "<<binary_pivot(arr,10);
}