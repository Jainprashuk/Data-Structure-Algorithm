#include <iostream>
using namespace std;

int sorting(){
    
}

int Binary_search(int arr[] , int n ,int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    
    while(start<end){
        if(key > arr[mid]){
            start = mid+1;
            mid = start + (end-start)/2;
        }
        else if(key < arr[mid]){
            end = mid-1;
            mid = start + (end-start)/2;
        }
        else{
            return mid ;
        }
        
    }
}

int main() {
    
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    
    int index = Binary_search(arr,9,9);
    cout << "Element Found at index : " << index ;
    return 0;
}