#include<iostream>
using namespace std;
int main(){
    string s1 = "abbaca";
    string ans = "";

    int i=0;
    while (i<s1.length())
    {
        if (ans.length()>0)
        {
            /* code */
            if (ans[ans.length()-1] == s1[i])
            {
                /* code */
                ans.pop_back();
            }
            else
            {
                ans.push_back(s1[i]);
            }
        }
        else
        {
            ans.push_back(s1[i]);
        }
        i++; 
    }


    for (int i = 0; i < ans.length(); i++)
    {
        /* code */
        cout<<ans[i];
    }
    
    
}
