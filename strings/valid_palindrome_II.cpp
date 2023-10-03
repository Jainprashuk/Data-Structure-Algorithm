#include <iostream>
using namespace std;

bool check_palidrome(string s, int i, int j)
{
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

bool palindrome_II (string s){
    int i= 0;
    int j = s.length()-1;

    while (i<=j)
    {
        if (s[i] != s[j])
        {
            return check_palidrome(s,i+1,j) || check_palidrome(s,i,j-1);
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}


int main()
{
    string s1 = "abca";
    bool ans = palindrome_II(s1);
    if (ans == true)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    
    
}
