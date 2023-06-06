//###### linear seach  ######//
// time complexity - o(n)

//###### binary search  ######//
// should be in increasing/decreasing order
// time complexity - o(logn)
// question 1-classic questions  2-find in search space  3-index observation



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
    return -1;
}



int main(){
    int arr[10];

    cout<<"enter array elements : ";
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }

    display(arr,10);



    linear_search(arr,10);
    
    



    int p=binary_search(arr,10);
    if (p != -1)
    {
        /* code */
        cout<<"element found at index : "<<p<<endl;
    }
    else{
        cout<<"element not found "<<endl;
    }


// by predefined function .....
    if (binary_search(arr,arr+10,6))
    {
        cout<<"element found "<<endl;
    }
    else{
        cout<<"element not found "<<endl;
    }
    
    
}