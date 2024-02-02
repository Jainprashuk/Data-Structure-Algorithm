#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,4> arr = {1,2,3,4}; // also static array

    cout<<arr.size();
    cout<<arr.empty();
    cout<<arr.at(2);
    cout<<arr.front();
    cout<<arr.back();

}

