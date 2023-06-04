// intersection of array

#include <iostream>
#include <vector>
using namespace std;

void intersection_array(vector<int> arr, vector<int> brr)
{
    vector<int> crr;

    for (int i = 0; i < arr.size(); i++)
    {
        // int element = arr[i];
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i] == brr[j])
            {
                /* code */
                crr.push_back(arr[i]);
                brr[j]=-1;
            }
        }
    }

    for (int i = 0; i < crr.size(); i++)
    {
        /* code */
        cout << crr[i] << " ";
    }
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
 
 
    intersection_array(arr, brr);
}