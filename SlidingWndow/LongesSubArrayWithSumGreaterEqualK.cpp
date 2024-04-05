// largest subarray with sum less then or equal to K

#include<iostream>
#include<vector>
using namespace std;

int LongestSubarrayBrute(vector<int>arr , int k){
    int maxlen = 0;
    for(int i= 0 ; i<arr.size() ; i++){
        int sum = 0;
        for (int j = i; j < arr.size(); j++)
        {
            sum = sum + arr[j];
            if(sum>k){
                break;
            }
            maxlen = max(maxlen , j-i+1);
        }  
    }
    return maxlen;
}

int LongestSubarraySliding(){
    
}

int main(){
    vector<int>arr{1,2,3,4,5,6};
    int k = 10;

    cout<< LongestSubarrayBrute(arr,k)<<endl; 
}