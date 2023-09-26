#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,3,5,-3,5,-2,-1,-8,1,-11};
    int low=0;
    int high=9;

    while(low<high)
    {
        if (arr[low]<0)
        {
            low++;
        }
        else if (arr[high]>0)
        {
            high--;
        }
        else{
            int temp = arr[low];
            arr[low]= arr[high];
            arr[high] = temp;
        }
    }

    for (int i = 0; i < 10; i++)
    { 
        cout<<arr[i]<<" ";
    }
    
    

    
    
}