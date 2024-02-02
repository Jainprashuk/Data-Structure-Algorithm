#include <iostream>
#include <list>

int main() {
    // Creating a list of integers
    std::list<int> myList;

    // Inserting elements at the end of the list
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    // Inserting elements at the beginning of the list
    myList.push_front(5);
    myList.push_front(15);

    // Displaying the elements in the list using iterators
    std::cout << "List elements: ";
    for (const auto& element : myList) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Accessing the first and last element
    std::cout << "First element: " << myList.front() << std::endl;
    std::cout << "Last element: " << myList.back() << std::endl;

    // Removing elements from the list
    myList.pop_front(); // Remove the first element
    myList.pop_back();  // Remove the last element

    // Displaying the modified list
    std::cout << "List after removal: ";
    for (const auto& element : myList) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Checking if the list is empty
    std::cout << "Is the list empty? " << (myList.empty() ? "Yes" : "No") << std::endl;

    // Clearing the list
    myList.clear();
    std::cout << "List after clearing: ";
    for (const auto& element : myList) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Inserting elements at a specific position
    std::list<int>::iterator it = myList.begin();
    ++it; // Move to the second position
    myList.insert(it, 25);

    // Displaying the list after insertion
    std::cout << "List after insertion: ";
    for (const auto& element : myList) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Using begin() to get an iterator to the beginning of the list
    std::cout << "Using begin() to access the first element: " << *myList.begin() << std::endl;

    return 0;
}
