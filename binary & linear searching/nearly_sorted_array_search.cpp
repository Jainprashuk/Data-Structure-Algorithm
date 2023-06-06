// the element which shoul be on ith place can be on i+1 or i-1 position \

#include<iostream>
using namespace std;

int binary_search(int arr[],int size){
    int key;
    cout<<"enter element u want to search"<<endl;
    cin>>key;

    int start = 0;
    int end = size-1;
    // int mid = (start+end)/2;
    int mid=start+(end-start)/2;

    while (start<=end)
    {
        if (arr[mid]==key)
        {
            return mid ;
        }
        if (mid+1<=size && arr[mid+1]==key)
        {
            return mid+1 ;
        }
        if (mid-1>=0 && arr[mid-1]==key)
        {
            return mid-1;
        }
        else if (arr[mid]>key)
        {
            end = mid - 2;
        }
        else{
            start= mid +2;
        }

        // mid = (start+end)/2;
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
    int arr[10]={10,3,40,20,50,80,70};
    cout<<binary_search(arr,7);
}