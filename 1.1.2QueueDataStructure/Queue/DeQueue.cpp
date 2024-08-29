/*
    ALGORITHM FOR WORKING WITH DEQUEUE
    1. Please check whether or not the queue is empty
    2. If the queue is empty, then the program will print an underflow error and exit.
    3. if the queue is not empty, print the head, element and increase the head values.







Key Points:
Overflow Handling: The enqueue function checks if the queue is full before adding a new element and prints an error if it is.
Underflow Handling: The dequeue function checks if the queue is empty before trying to remove an element and prints an error if it is.
Shifting Elements: In the dequeue function, after removing the front element, all remaining elements are shifted one position to the left, which keeps the queue structure intact.
Resetting Front and Rear: After removing all elements, both front and rear are reset to -1 to indicate that the queue is empty again.
*/

#include<iostream>
using namespace std;

#define SIZE 10 // Define the maximum size of the queue

class Queue {
    int a[SIZE]; // Array to store queue elements
    int rear;    // Points to the last element in the queue (tail)
    int front;   // Points to the first element in the queue (head)

public:
    Queue() {
        rear = front = -1; // Initialize both rear and front to -1 (indicating an empty queue)
    }

    void enqueue(int x);   // Function to add an element to the queue
    int dequeue();         // Function to remove an element from the queue
    void display();        // Function to display the queue elements
};

// Function to add an element to the queue
void Queue::enqueue(int x) {
    if (rear == SIZE - 1) { // Check if the queue is full
        cout << "Queue is full\n"; // Print an overflow error
        return;
    }

    if (front == -1) { // If the queue is initially empty
        front = 0; // Set front to 0 when the first element is added
    }

    rear++;      // Move rear to the next position
    a[rear] = x; // Add the element to the queue
}

// Function to remove an element from the queue
int Queue::dequeue() {
    if (front == -1 || front > rear) { // Check if the queue is empty
        cout << "Queue is empty\n"; // Print an underflow error
        return -1; // Return -1 to indicate an error
    }

    int temp = a[front]; // Store the front element to return

    // Shift all elements to the left by one position
    for (int i = front; i < rear; i++) {
        a[i] = a[i + 1];
    }

    rear--; // Decrease rear since one element is removed

    // If the queue becomes empty after dequeuing, reset front and rear
    if (rear == -1) {
        front = -1;
    }

    return temp; // Return the dequeued element
}

// Function to display the queue elements
void Queue::display() {
    if (front == -1) { // If the queue is empty
        cout << "Queue is empty\n";
        return;
    }

    for (int i = front; i <= rear; i++) { // Loop to print each element in the queue
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    Queue q;

    // Adding elements to the queue
    q.enqueue(10);
    q.enqueue(100);
    q.enqueue(1000);
    q.enqueue(1001);

    // Removing elements from the queue
    cout << "Dequeued: " << q.dequeue() << endl; // Dequeue the first element
    q.enqueue(1003); // Adding another element

    // Removing more elements
    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;

    q.enqueue(1004); // Adding one more element

    // Display the remaining elements in the queue
    cout << "Queue elements: ";
    q.display();

    return 0;
}
