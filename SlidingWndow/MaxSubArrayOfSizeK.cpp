
#include <iostream>
#include<vector>
using namespace std;

int maxsum(vector<int>arr , int k){
    int start  = 0;
    int end = k-1;
    
    int sum = 0;
    for(int i = 0 ; i<=k ; i++){   // 1 2 3 4 5
        sum = sum + arr[i];
    }
    
    int maxsum = sum;
    
    while(end<arr.size()){
        end++;
        sum = sum+arr[end];
        
        start++;
        sum = sum - arr[start];
        
        maxsum = max(maxsum , sum);
    }
    
    return maxsum;
}

int main() {
    
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    
    cout<<maxsum(arr,2);
    
    

    return 0;
}