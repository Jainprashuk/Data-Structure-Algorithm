#include<iostream>
#include <climits>
using namespace std;

void printArray(int arr[] , int n , int i){
    if (i<n)
    {
        /* code */
        cout<<arr[i]<<" ";
        printArray(arr,n,i+1);
    }
}


int fibanacci(int n){
    if (n==1 || n==2)
    {
        /* code */
        return 1;
    }
    return fibanacci(n-1)+fibanacci(n-2);
    
}


int fact(int n){
    if (n==1)
    {
        /* code */
        return 1;
    }
    return n*fact(n-1); 
}

void forwardCount(int n){

    if (n==0)
    {
        return;
    }
    
    forwardCount(n-1);
    cout << n ;
}

void backwardCount(int n){
    if (n==0)
    {
        return;
    }
    
    
    cout << n ;
    backwardCount(n-1);
}

int maxElement(int arr[] , int n ,int  i , int maxi){
    if(i == n) {
        return maxi;
    }

    if (arr[i] > maxi) {
        return maxElement(arr, n, i + 1, arr[i]);
    } else {
        return maxElement(arr, n, i + 1, maxi);
    }
}

int minElement(int arr[] , int n , int i , int mini){
    if (i==n)
    {
        /* code */
        return mini;
    }
    if (arr[i]<mini)
    {
        /* code */
        return minElement(arr,n,i+1,arr[i]);
    } 
    return minElement(arr,n,i+1,mini);    
}

int Searching(int arr[] , int n , int i , int target){
    if (i<n){
        if (arr[i] == target){
            return i;
        } 
    }
    return Searching(arr,n,i+1,target);
}

void printDigits(int n){
    if (n==0)
    {
        /* code */
        return;
    }
    cout<<n%10<<" ";
    printDigits(n/10);
}

bool checkSorted(int arr[] , int n , int i){
    if (i==n-1)
    {
        return true;
    }
    if (arr[i+1]<arr[i])
    {
        /* code */
        return false;
    }
    checkSorted(arr,n,i+1);
}


int binarySearch(int arr[] , int n , int s , int e , int target){
    int mid = (s+e)/2 ; 
    if (arr[mid] == target)
    {
        /* code */
        return mid;
    }
    if (arr[mid] > target)
    {
        /* code */
        return binarySearch(arr,n,s,mid-1,target);
    }
    else{
        return binarySearch(arr,n,mid+1,e,target);
    }
    
    

}

int main(){
    int arr[] = {11,2,3,4,5,6,7,8,9,10};
    int n=10;

    // printArray(arr,n , 0);


    // int ans = fibanacci(4);
    // cout<<ans;

    // int ans = fact(3);
    // cout<<ans;

    // forwardCount(5);
    // backwardCount(5);

    // int max = maxElement(arr , n , 0 , INT_MIN);
    // cout<<max;

    // int min = minElement(arr , n , 0 , INT_MAX);
    // cout<<min;

    // int index = Searching(arr,n,0,5);
    // cout<<index;

    // printDigits(234);

    // cout<<checkSorted(arr,n,0);

    int index = binarySearch(arr,n,0,n-1,4);
    cout<<"Index of element is : " <<index; 
}