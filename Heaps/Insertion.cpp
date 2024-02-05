// time : o(log n)


// max heap
// steps -1) element ko array me insert kro sare elements ke baad
//        2) element to parent se se campare kro - if vo bada hai to swap kr do

#include<iostream>
// #include<bits/stdc++.h>
using namespace std;

class Heap{
    public:
    int *arr;
    int arrsize;
    int size;

    Heap(int arrsize){
        this->arrsize = arrsize;
        size= 0;
        arr = new int[arrsize];
    }

    void insert(int data){
        size = size + 1;
        int index = size;
        arr[index] = data;

        while (index > 1)
        {
            int parentindex = index/2;

            if (arr[index] > arr[parentindex])
            {
                swap(arr[index] , arr[parentindex]);
                index = parentindex;
            }else{
                break;
            }
            
        }
        
    }

};


int main(){
    Heap h(20);
    h.arr[0] = -1;
    // h.arr[1] = 100;
    // h.arr[2] = 50;
    // h.arr[3] = 60;
    // h.arr[4] = 40;
    // h.arr[5] = 45;
    // h.size = 5; 
    h.insert(100);
    h.insert(50);
    h.insert(60);
    h.insert(40);
    h.insert(45);

    cout<<"Printing The Heap : "<<endl;
    for (int i = 0; i <= h.size; i++)
    {
        cout<<h.arr[i]<<" ";
    }
    cout<<endl;

    h.insert(110);
    cout<<"Printing The Heap : "<<endl;
    for (int i = 0; i <= h.size; i++)
    {
        cout<<h.arr[i]<<" ";
    }
    cout<<endl;
    
}