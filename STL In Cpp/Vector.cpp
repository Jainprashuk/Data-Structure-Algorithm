// doubles the size once it get filled
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    // vector<int> v(5,1); // 5- size , 1 - all values is 1
    vector<int> copy(v);

    v.push_back(2);
    v.push_back(2);
    v.push_back(2);
    cout<<"Total Capacity : "<<v.capacity()<<endl;
    cout<<"Total Size : "<<v.size();
    cout<<v.at(2);
    cout<<v.front();
    cout<<v.back();

    v.pop_back();

    v.clear(); // only clears all elements and makes its size 0 while capacity doest get afftected 



    
}