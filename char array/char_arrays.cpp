#include<iostream>
using namespace std;
int main(){

    char arr[100];
    cout<<"Enter your Name : ";
    // cin>>arr;
    // cout<<arr;

    // char arr[100];
    // arr[0]='j';
    // arr[1]='a';
    // arr[2]='i';
    // arr[3]='n';
    // cout<<arr;

    // char arr[100] ;
    // cin>>arr;        //will take only till space or tabs
    cin.getline(arr,100 );
    cout<<arr;
    

}