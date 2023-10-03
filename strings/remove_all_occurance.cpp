#include<iostream>
using namespace std;
int main(){
    string s1 = "daabcbaabcbc";
    string s2="abc";

    int pos = s1.find(s2);

    while (pos != string::npos)
    {
        s1.erase(pos,s2.length());
        pos = s1.find(s2);
    }
    

    


    for (int i = 0; i < s1.length(); i++)
    {
        /* code */
        cout<<s1[i];
    }
    
    
}
