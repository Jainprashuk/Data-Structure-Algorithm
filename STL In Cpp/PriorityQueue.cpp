// queue whose fist element is always greatest (Max heap)

#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> q;  // max heap - whenver we fetch we will get greatest element

    priority_queue<int , vector<int> , greater<int> > mini ; // min heap
}