// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int LastOccurance(string str , char c , int i , int index){
    if(i==str.length()){
        return index;
    }
    
    if(str[i] == c){
        index = i;
    }
    
    return LastOccurance(str,c,i+1,index);
}

string ReverseString(string str , int start , int end){
    if(start >= end || end >= str.length()){
        return str;
    }
    
    swap(str[start],str[end]);
    return ReverseString(str,start+1,end-1);
    
}

int main() {
    // Write C++ code here
    
    string str = "abcasb";
    char c = 'a';
    // cout<<LastOccurance(str,c,0,0);
    cout<<ReverseString(str,0,str.length()-1);
    
    

    return 0;
}