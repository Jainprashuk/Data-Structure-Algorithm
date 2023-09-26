// vector = dynamic array
// default size = 0 
#include<iostream>
#include<vector>

using namespace std;
int main()
{
    // to initaialize vector array
    // vector<int>brr(10,-98);
    vector<int>crr{10,20,30,40,50};


    // to initialize user defined array 
    int n;
    cin>>n;
    vector<int>arr(n);


    // to add elements 
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(2);
    arr.push_back(7);
    arr.push_back(3);

    // to remove element at end 
    arr.pop_back();

    // to check size
    arr.size();

    // to check empty array
    cout<< arr.empty()<<endl; 

    // to print
    for (int i = 0; i < arr.size(); i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    



    return 0;
}
