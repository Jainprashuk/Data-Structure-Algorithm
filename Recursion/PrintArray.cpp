#include<iostream>
using namespace std ;

void printarray(int arr[] , int n , int i){
    if (i<n && i>=0)
    {
        /* code */
        cout<<arr[i];
        printarray(arr, n , i+1);
    }
}

int main(){
    int arr[] = {1,2,3,4,5};

    printarray(arr , 5 , 0);

}