// stores in key value pair
// key are unique and each key points to single vlue
// map - sorted , unordered map - unsorted

#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> map1;

    map1[1] = "jain";
    map1[2] = "jwnej";
    map1[3] = "jain";

    map1.insert({5,"hello"});


    for(auto i:map1){
        cout<<i.first<<" "<<i.second<<endl;
    }
}