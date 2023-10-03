// #include<iostream>
// using namespace std;

// void substring(string s){
//     for (int i = 0; i < s.length(); i++)
//     {
//         for (int j = i; j < s.length(); j++)
//         {
//             for (int k = i; k <= j; k++)
//             {
//                 cout << s[k];
//             }
//             cout << endl;
//         }
//     }
// }

// int main(){
//     string s = "hello";
//     substring(s);
// }

#include <iostream>
using namespace std;
int main()
{
enum days
{
mon, tues, wed, thurs, fri, sat, sun };
for (int num = mon; num <= sun; num++)
cout << num+++ (days (num));
return 0;
}