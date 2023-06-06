#include <iostream>
using namespace std;

int binary_search(int p, int q)
{

    int start = q;
    int end = abs(p);
    // int mid = (start+end)/2;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (abs(q * mid) == abs(p))
        {
            return mid;
        }
        else if (abs(q * mid) > abs(p))
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        // mid = (start+end)/2;
        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{
    int p;
    cout << "number to be divided :";
    cin >> p;

    int q;
    cout << "number by which divided :";
    cin >> q;

    int ans = binary_search(p, q);

    if (p > 0 && q > 0)
    {
        ans = ans;
    }
    else if(p<0 && q<0){
        ans = ans ;
    }
    else if(p<0 || q<0){
        ans = ans*-1;
    }

    cout<<ans;
}