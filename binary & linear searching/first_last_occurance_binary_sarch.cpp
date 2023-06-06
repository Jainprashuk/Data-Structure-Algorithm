//###### linear seach  ######//
// time complexity - o(n)

//###### binary search  ######//
// should be in increasing/decreasing order
// time complexity - o(logn)



#include<iostream>
#include<algorithm>
using namespace std;

void display(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void linear_search(int arr[] , int size){
    int key;
    cout<<"enter element u want to search"<<endl;
    cin>>key;

    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            cout<<"Element found at index " << i <<endl;
        }
    }
}

int binary_search_first(int arr[],int size){
    int key;
    cout<<"enter element u want to search"<<endl;
    cin>>key;

    int start = 0;
    int ans;
    int end = size-1;
    // int mid = (start+end)/2;
    int mid=start+(end-start)/2;

    while (start<=end)
    {
        if (arr[mid]==key)
        {
             ans = mid;
            end=mid-1;
        }
        else if (arr[mid]>key)
        {
            end = mid - 1;
        }
        else{
            start= mid +1;
        }

        // mid = (start+end)/2;
        mid=start+(end-start)/2;
    }
    return ans;
}

int binary_search_last(int arr[],int size){
    int key;
    cout<<"enter element u want to search"<<endl;
    cin>>key;

    int start = 0;
    int ans;
    int end = size-1;
    // int mid = (start+end)/2;
    int mid=start+(end-start)/2;

    while (start<=end)
    {
        if (arr[mid]==key)
        {
             ans = mid;
             start= mid +1;
            
        }
        else if (arr[mid]>key)
        {
            end = mid - 1;
        }
        else{
            start= mid +1;
        }

        // mid = (start+end)/2;
        mid=start+(end-start)/2;
    }
    return ans;
}



int main(){
    int arr[10];

    cout<<"enter array elements : ";
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }

    
    



    int p=binary_search_first(arr,10);
    if (p != -1)
    {
        /* code */
        cout<<"first occurance at index : "<<p<<endl;
    }
    else{
        cout<<"element not found "<<endl;
    }

    int q=binary_search_last(arr,10);
    if (q != -1)
    {
        /* code */
        cout<<"last occurance at index : "<<q<<endl;
    }
    else{
        cout<<"element not found "<<endl;
    }



    
    
}