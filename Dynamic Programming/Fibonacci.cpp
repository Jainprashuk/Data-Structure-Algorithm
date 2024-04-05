#include<iostream>
#include<vector>
using namespace std;

int fibanacii(int n){
    if(n==0 || n==1){
        return n;
    }

    int ans = fibanacii(n-1)+fibanacii(n-2);
    return ans;
}

// -- memmoization
// 1- create dp
// 2- insert vaues in dp
// 3- check values if already calculated and stored in dp if yes return it 
// time - o(n) , space - o(n+n) 
int TopDown(int n , vector<int> &dp){
    if(n==0 || n==1){
        return n;
    }

    if (dp[n] != -1){
        return dp[n];
    }

  
    

    dp[n] = fibanacii(n-1)+fibanacii(n-2);
    return dp[n];
}


// -- Tabulation
// 1 - create dp array
// 2 - observe base case
// 3 - iteration
// time - o(n) , space-o(n)
int BottomUp(int n){

    vector<int> dp(n+1,-1);
    dp[0] = 0;
    dp[1] = 1;

    for(int i = 2 ; i<= n ; i++){
        dp[i] = dp[i-1]+dp[i-2];
    }

    return dp[n];
}


int main(){
    int n = 6;
    // vector<int>dp(n+1 , -1);
    // int ans = fibanacii(n);
    
    // int fans = TopDown(n,dp);


    int fans = BottomUp(n);
    cout<<fans;
}