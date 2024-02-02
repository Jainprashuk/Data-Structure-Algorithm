// stores unique Elements
// impleamented using bst behinethe scene
// operation : insert , delete ( No Modifications )

// ordered set is slower then unorderd set
// ordered - sorted , unordered - unsorted


#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int> s;
    s.insert(12);
    s.insert(12);
    s.insert(142);
    s.insert(102);
    s.insert(0);

    // Removing elements from the set
    s.erase(20);


    for(int i : s){
        cout<<i<<" ";
    }


    // Checking if the set is empty
    std::cout << "Is the set empty? " << (s.empty() ? "Yes" : "No") << std::endl;

    // Clearing the set
    s.clear();
}