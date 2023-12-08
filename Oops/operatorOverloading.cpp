#include<iostream>
using namespace std;


class param{
    public:
    int val; 

    void operator+(param& obj2){
        int valueobj1 = this->val;
        int valueobj2 = obj2.val;

        cout<<(valueobj2-valueobj1);
    }
};

int main(){
    param obj1 , obj2;
    obj1.val = 7;
    obj2.val = 2;
    obj1 + obj2;


}