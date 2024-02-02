#include <iostream>
#include <deque>

int main() {
    // Declare a deque of integers
    std::deque<int> myDeque;

    // Push elements to the back of the deque
    myDeque.push_back(10);
    myDeque.push_back(20);
    myDeque.push_back(30);

    // Push elements to the front of the deque
    myDeque.push_front(5);
    myDeque.push_front(15);

    // Display the elements of the deque
    std::cout << "Deque elements: ";
    for (const auto& element : myDeque) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Access elements using subscript operator
    std::cout << "Element at index 2: " << myDeque[2] << std::endl;

    // Access elements using at() function
    std::cout << "Element at index 3: " << myDeque.at(3) << std::endl;

    // Display the front and back elements
    std::cout << "Front element: " << myDeque.front() << std::endl;
    std::cout << "Back element: " << myDeque.back() << std::endl;

    // Pop elements from the front and back
    myDeque.pop_front();
    myDeque.pop_back();

    // Display the updated deque
    std::cout << "Updated deque elements: ";
    for (const auto& element : myDeque) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
