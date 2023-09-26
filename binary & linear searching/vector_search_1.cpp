#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){

    vector<int> arr(10);

    cout<<"enter array elements : ";
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }

    if (binary_search(arr.begin(),arr.end(),6))
    {
        cout<<"element found "<<endl;
    }
    else{
        cout<<"element not found "<<endl;
    }
    
    
}