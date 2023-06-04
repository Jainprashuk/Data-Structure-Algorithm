#include<iostream>
#include<vector>
using namespace std;
int main(){
    // int arr[i][j];

    int arr[3][3];
    int brr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    // cout<<brr[2][2];

cout<<"row wise"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }

cout<<endl<<endl;

cout<<"column wise"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}