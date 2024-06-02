#include <iostream>
using namespace std;

class CircularQueue {
private:
    int front, rear, capacity;
    int* arr;
public:
    CircularQueue(int size) {
        capacity = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    ~CircularQueue() {
        delete[] arr;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue overflow\n";
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = x;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue underflow\n";
            return -1;
        }
        int item = arr[front];
        if (front == rear) { // Queue has only one element, reset it after dequeue
            front = -1;
            rear = -1;
        } else {
            front= (front + 1) % capacity;
        }
        return item;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear+1)%capacity == front;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        // for (int i = front; i <= rear; i++) {
        //     cout << arr[i] << " ";
        // }
        int i = front;
        cout << "Queue elements: ";
        while (true) {
                    cout << arr[i] << " ";
                    if (i == rear) break;
                    i = (i + 1) % capacity;
                }
        cout << endl;
    }
};

int main() {
    int size;
    cout << "Enter the size of the queue: ";
    cin >> size;

    CircularQueue q(size);

    cout << "Enter elements to enqueue: ";
    for (int i = 0; i < size; ++i) {
        int x;
        cin >> x;
        q.enqueue(x);
    }

    cout << "Queue after enqueuing: ";
    q.display();

    cout << "Dequeuing element: " << q.dequeue() << endl;

    cout << "Queue after dequeuing: ";
    q.display();

    cout << "Front element: " << q.peek() << endl;

    return 0;
}


