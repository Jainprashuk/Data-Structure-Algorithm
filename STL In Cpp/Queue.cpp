#include <iostream>
#include <queue>

int main() {
    // Creating a queue of integers
    std::queue<int> myQueue;

    // Enqueuing (pushing) elements into the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Displaying the front element of the queue
    std::cout << "Front element of the queue: " << myQueue.front() << std::endl;

    // Dequeuing (popping) elements from the queue
    myQueue.pop();

    // Displaying the queue after dequeuing
    std::cout << "Queue after dequeuing: ";
    while (!myQueue.empty()) {
        std::cout << myQueue.front() << " ";
        myQueue.pop();
    }
    std::cout << std::endl;

    // Checking if the queue is empty
    std::cout << "Is the queue empty? " << (myQueue.empty() ? "Yes" : "No") << std::endl;

    // Enqueuing more elements into the queue
    myQueue.push(5);
    myQueue.push(15);

    // Displaying the queue after enqueuing more elements
    std::cout << "Queue after enqueuing more elements: ";
    while (!myQueue.empty()) {
        std::cout << myQueue.front() << " ";
        myQueue.pop();
    }
    std::cout << std::endl;

    return 0;
}
