#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;


void reverse(char arr[],int size){
    int start = 0;
    int end = size-1;

    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    cout<<arr;
    
}


int main(){
    char arr[100];
    // cin>>arr;
    cin.getline(arr, 100);

    reverse(arr,strlen(arr));
}