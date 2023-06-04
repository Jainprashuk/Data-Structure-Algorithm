// given an array with some elements , every element is repeated twice exept one  , we need to find that one element

#include<iostream>
#include<vector>
using namespace std;

int unique_element(vector<int> arr){
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = arr[i] ^ ans;
    }

    return ans;
    
}

int main(){
    int n;

    cout<<"enter the size of array : "<<endl;
    cin>>n;

    vector<int>arr(n);

    cout<<"enter the elements : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }

    int uniqueelement = unique_element(arr);
    cout<<"unique element is : "<<uniqueelement;
    
}




// hint : we use xor operator