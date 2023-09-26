#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char arr[100];
    cin>>arr;
    int count = 0;
    int i =0;  
    while (arr[i] != '\0')
    {
        count++;
        i++;
    }

    cout<<"length is : "<<count<<endl;
    cout<<"length by predefined fxn : "<<strlen(arr);
}