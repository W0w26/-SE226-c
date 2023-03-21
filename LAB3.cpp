#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

class Queue {
private:
    Node* front;
    Node* rear;
    int size;
public:
    Queue() {
        front = NULL;
        rear = NULL;
        size = 0;
    }

    ~Queue() {
        while (front != NULL) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
        rear = NULL;
    }

    void enqueue(int value) {
        Node* newNode = new Node(value);

        if (front == NULL) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        size++;
    }

    void dequeue() {
        if (front == NULL) {
            cout << "Queue is empty!" << endl;
            return;
        }

        Node* temp = front;
        front = front->next;
        delete temp;

        size--;
    }

    int peek() {
        if (front == NULL) {
            cout << "Queue is empty!" << endl;
            return -1;
        }

        return front->data;
    }

    bool isEmpty() {
        return front == NULL;
    }

    int getSize() {
        return size;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Size of queue: " << q.getSize() << endl;
    cout << "Front element: " << q.peek() << endl;

    q.dequeue();
    q.dequeue();

    cout << "Size of queue: " << q.getSize() << endl;
    cout << "Front element: " << q.peek() << endl;

    q.dequeue();

    cout << "Size of queue: " << q.getSize() << endl;
    cout << "Is empty: " << q.isEmpty() << endl;

    return 0;
}
