// given an array and the sum value , we need to find the pair whose sum is equal to sum value

#include <iostream>
#include <vector>
using namespace std;

void pair_sum(vector<int> brr, int sum)
{
    
    for (int i = 0; i < brr.size(); i++)
    {
        for (int j = i + 1; j < brr.size(); j++)
        {
            if (brr[i] + brr[j] == sum)
            {
                cout<<"("<<brr[i]<< ","<<brr[j]<<")"<<endl;
                
            }
        }
    }

   
    
}

int main()
{

    int n;
    cout << "enter no of elements is array : ";
    cin >> n;

    vector<int> arr(n);
    cout << "enter the elements :";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
int sum;
    cout<<"sum you want : ";
    cin>>sum;

    pair_sum(arr, sum);
}