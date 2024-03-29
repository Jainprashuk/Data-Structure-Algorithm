// union of 2 array supposing no duplicates

#include <iostream>
#include <vector>
#include<set>
using namespace std;

void union_array(vector<int> arr, vector<int> brr)
{
    vector<int> crr;
    for (int i = 0; i < arr.size(); i++)
    {
        crr.push_back(arr[i]);
    }
    for (int i = 0; i < brr.size(); i++)
    {
        crr.push_back(brr[i]);
    }

    for (int i = 0; i < crr.size(); i++)
    {
        /* code */
        cout << crr[i] << " ";
    }
}

int doUnion(int a[], int n, int b[], int m)  {
        //code here
        set<int> ans;
        for(int i=0 ; i<n ; i++){
            ans.insert(a[i]);
        }
        for(int i=0 ; i<m ; i++){
            ans.insert(b[i]);
        }
        
        return ans.size();
    }


int main()
{
    int n;

    cout << "enter the size of array 1 : " << endl;
    cin >> n;

    vector<int> arr(n);

    cout << "enter the elements of array 1: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int m;

    cout << "enter the size of array 2: " << endl;
    cin >> m;

    vector<int> brr(m);

    cout << "enter the elements of array 2 : ";
    for (int i = 0; i < brr.size(); i++)
    {
        cin >> brr[i];
    }

    union_array(arr, brr);
}