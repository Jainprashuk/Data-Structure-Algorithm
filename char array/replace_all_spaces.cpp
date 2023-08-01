#include<iostream>
#include<string.h>
using namespace std;

void RemoveSpaces(char arr[] , int size){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==' ')
        {
            arr[i]='@';  
        }
        
    }

    cout<<arr;
    
}

int main(){
    char arr[100];
    cin.getline(arr,100);

    RemoveSpaces(arr,strlen(arr));

}