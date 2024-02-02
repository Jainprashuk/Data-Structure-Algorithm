#include <iostream>
#include <stack>

int main() {
    // Creating a stack of integers
    std::stack<int> myStack;

    // Pushing elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Displaying the top element of the stack
    std::cout << "Top element of the stack: " << myStack.top() << std::endl;

    // Popping elements from the stack
    myStack.pop();

    // Displaying the stack after popping
    std::cout << "Stack after popping: ";
    while (!myStack.empty()) {
        std::cout << myStack.top() << " ";
        myStack.pop();
    }
    std::cout << std::endl;

    // Checking if the stack is empty
    std::cout << "Is the stack empty? " << (myStack.empty() ? "Yes" : "No") << std::endl;

    // Pushing more elements onto the stack
    myStack.push(5);
    myStack.push(15);

    // Displaying the stack after pushing more elements
    std::cout << "Stack after pushing more elements: ";
    while (!myStack.empty()) {
        std::cout << myStack.top() << " ";
        myStack.pop();
    }
    std::cout << std::endl;

    return 0;
}
