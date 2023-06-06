#include<iostream>
#include<vector>
using namespace std;

int binary_search(int key){
    

    int start = 0;
    int end = key;
    // int mid = (start+end)/2;
    int mid=start+(end-start)/2;

    while (start<=end)
    {
        if (mid*mid==key)
        {
            return mid ;
        }
        else if (mid*mid>key)
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
    int num;
    cout<<"enter the number : ";
    cin>>num;

    // vector<int>arr(num);
    // for (int i = 1; i < arr.size()+1; i++)
    // {
    //     arr[i]=i;
    // }

    // for (int i = 1; i < arr.size()+1; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    int p=binary_search(num);
    cout<<p;
    
}