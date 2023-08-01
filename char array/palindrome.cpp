#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

bool ReverseString(char arr[],int size){
    int start = 0;
    int end = size-1;
    while (start<=end)
    {
        if (arr[start] != arr[end])
        {
            return false;
        }
        
        start++;
        end--;
    }

    return true;
    
}


int main(){
    char arr[100];
    cin.getline(arr,100);

    bool palindrome  = ReverseString(arr,strlen(arr));
    cout<<palindrome;
    
    
}