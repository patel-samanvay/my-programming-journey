#include<iostream> 
using namespace std; 
struct Node  
{ 
    int data; 
    Node* next; 
}; 
 
class Queue  
{ 
    Node* front;  
    Node* rear;   
    public: 
    Queue() 
    { 
        front = nullptr; 
        rear = nullptr; 
    } 
 
    void enqueue(int value)  
    { 
        Node* newNode = new Node(); 
        newNode->data = value; 
        newNode->next = nullptr; 
 
        if (rear == nullptr) 
        { 
            front = rear = newNode; 
        }  
        else  
        { 
            rear->next = newNode; 
            rear = newNode; 
        } 
        cout << value << " enqueued to the queue\n"; 
    } 
 
    void dequeue()  
    { 
        if (front == nullptr)  
        { 
            cout << "Queue is empty! Cannot dequeue.\n"; 
            return; 
        } 
 
        Node* temp = front; 
        cout << "Dequeued: " << front->data << endl; 
        front = front->next; 
 
        if (front == nullptr) 
        { 
            rear = nullptr; 
        } 
 
        delete temp; 

    } 
 
    void peek() 
    { 
        if (front == nullptr)  
        { 
            cout << "Queue is empty! No element to peek.\n"; 
            return; 
        } 
        cout << "Front element is: " << front->data << 
endl; 
    } 
 
    bool isEmpty()  
    { 
        return front == nullptr; 
    } 
 
    void display()  
    { 
        if (front == nullptr)  
        { 
            cout << "Queue is empty!\n"; 
            return; 
        } 
        Node* temp = front; 
        cout << "Queue: "; 
        while (temp != nullptr)  
        { 
            cout << temp->data << " "; 
            temp = temp->next; 
        } 
        cout << endl; 
    } 
}; 
 
int main() 
{ 
    Queue q; 
    int choice, value; 
 
    while (true)  
    { 
        cout << "\nQueue Menu:\n"; 
        cout << "1. Enqueue\n"; 
        cout << "2. Dequeue\n"; 
        cout << "3. Display\n"; 
        cout << "4. Exit\n"; 
        cout << "Enter your choice: "; 
        cin >> choice; 
        switch (choice) 
        { 
            case 1: 
                cout << "Enter value to enqueue: "; 
                cin >> value; 
                q.enqueue(value); 
                break; 
            case 2: 
                q.dequeue(); 
                break; 
            case 3: 
                q.display(); 
                break; 
            case 4: 
                cout << "Exiting...\n"; 
                return 0; 
            default: 
                cout << "Invalid choice! Please try again.\n"; 
        } 
    } 
 
    return 0; 
}