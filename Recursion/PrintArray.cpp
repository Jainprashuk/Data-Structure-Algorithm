#include<iostream>
using namespace std ;

void printarray(int arr , int n){
    if (n==0)
    {
        /* code */
        return;
    }
    cout<<arr;
    printarray(arr+1 ,n-1);
}

int main(){
    int arr[] = {1,2,3,4,5};

    printarray(*arr ,5);

}