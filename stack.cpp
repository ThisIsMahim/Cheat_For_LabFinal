#include <iostream>
using namespace std;

class Stack {
private:
    int capacity;
    int top;
    int* arr;
public:
    Stack(int size) {
        capacity = size;
        arr = new int[size];
        top = -1;
    }
    ~Stack() {
        delete[] arr;
    }
    void push(int x) {
        if (isFull()) {
            cout << "Stack overflow\n";
            return;
        }
        arr[++top] = x;
    }
    int pop() {
        if (isEmpty()) {
            cout << "Stack underflow\n";
            return -1;
        }
        return arr[top--];
    }
    int peek() { // Changed from peep() to peek()
        if (isEmpty()) {
            cout << "Stack underflow\n";
            return -1;
        }
        return arr[top];
    }
    bool isEmpty() {
        return top == -1;
    }
    bool isFull() {
        return top == capacity - 1;
    }
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }
        for (int i = top; i >= 0; --i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size;
    cout << "Enter size of stack: ";
    cin >> size;
    Stack stack(size);

    cout << "Enter elements: ";
    for (int i = 0; i < size; ++i) {
        int x;
        cin >> x;
        stack.push(x);
    }

    cout << "Stack:\n";
    stack.display();

    cout << "After popping top element '" << stack.pop() <<"' Stack: "<< endl;
    stack.display();

    cout << "Top element: " << stack.peek() << endl; // Changed from peep() to peek()

    return 0;
}
