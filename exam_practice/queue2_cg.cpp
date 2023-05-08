#include <iostream>

using namespace std;

#define MAX_SIZE 100

class Queue {
private:
    int arr[MAX_SIZE];
    int front;
    int rear;
public:
    Queue() {
        front = -1;
        rear = -1;
    }
    bool isEmpty() {
        return front == -1 && rear == -1;
    }
    bool isFull() {
        return rear == MAX_SIZE - 1;
    }
    void enqueue(int x) {
        if (isFull()) {
            cout << "Error: Queue is full\n";
            return;
        }
        if (isEmpty()) {
            front = 0;
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = x;
    }
    void dequeue() {
        if (isEmpty()) {
            cout << "Error: Queue is empty\n";
            return;
        }
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front++;
        }
    }
    int peek() {
        if (isEmpty()) {
            cout << "Error: Queue is empty\n";
            return -1;
        }
        return arr[front];
    }
};

int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << q.peek() << endl;
    q.dequeue();
    cout << q.peek() << endl;
    q.dequeue();
    cout << q.peek() << endl;
    q.dequeue();
    cout << q.peek() << endl;
    q.dequeue();
    return 0;
}
