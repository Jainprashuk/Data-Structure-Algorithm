#include<iostream>
#include<vector>
using namespace std;

bool Isallowed(int digit , vector<int>arr){
    for (int i = 0; i < arr.size(); i++)
    {
        /* code */
        if (digit == arr[i])
        {
            /* code */
            return false;
        }
        
    }
    return true;
    
}


int Solve(int N , int K , vector<int>arr){
    int Num = N+1;                                      

    while (true)
    {
        bool isvalid = true;
        int temp = Num;

        while (temp > 0)
        {
            int digit = temp%10;

            //  bool check = ;

            if (!Isallowed(digit , arr))
            {
                isvalid = false;
                break;
            }

            temp = temp/10;
            
        }
        if (isvalid)
        {
            /* code */
            return Num;
        }

        Num++;
        
    }
}

int main(){
    int N;
    cout<<"Enter The Number : ";
    cin>>N;

    int K;
    cout<<"Enter The Number Of Elements Which Cant Be Used : ";
    cin>>K;

    vector<int> arr(K);
    cout<<"Enter The Elements which Cant Be Used :";
    for (int i = 0; i < K; i++)
    {
        /* code */
        cin>>arr[i];
    }

    int ans = Solve(N , K , arr);
    cout<<ans;
    


}