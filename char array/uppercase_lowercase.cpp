#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

void UpperCase(char arr[],int size){
    for (int i = 0; i < size; i++)
    {
        /* code */
        arr[i] = arr[i] - 'a' + 'A'; 
    }
    cout<<arr;
}

void LowerCase(char arr[],int size){
    for (int i = 0; i < size; i++)
    {
        /* code */
        arr[i] = arr[i] - 'A' + 'a'; 
    }
    cout<<arr;
}


int main(){

    char arr[100];
    cin.getline(arr,100);

    UpperCase(arr,strlen(arr));
    LowerCase(arr,strlen(arr));

 
}