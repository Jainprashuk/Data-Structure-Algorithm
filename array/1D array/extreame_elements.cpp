#include<iostream>
using namespace std;

void extreame_print(int arr[] , int size){
    int first = 0;
    int last = size-1;

    while (first<=last)
    {
        cout<<arr[first]<<" ";
        cout<<arr[last]<<" ";
        first ++;
        last --;
    }  
}


int main(){
    int n;
    cout<<"enter size of an array : ";
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    extreame_print(arr,n);
}