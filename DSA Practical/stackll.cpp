#include<iostream> 
using namespace std; 
struct Node { 
int data; 
Node* next; 
}; 
class Stack  
{ 
Node* top; 
public: 
Stack()  
{ 
top = nullptr; 
} 
void push(int value)  
{ 
Node* newNode = new Node(); 
newNode->data = value; 
newNode->next = top; 
top = newNode;  
cout << value << " pushed onto the stack\n"; 
} 
void pop()  
{ 
if (top == nullptr) 
{
            cout << "Stack is empty! Cannot pop.\n"; 
            return; 
        } 
        Node* temp = top; 
        cout << "Popped: " << top->data << endl; 
        top = top->next;  
        delete temp;  
    } 
 
    void display() 
    { 
        if (top == nullptr)  
        { 
            cout << "Stack is empty!\n"; 
            return; 
        } 
        Node* temp = top; 
        cout << "Stack: "; 
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
    Stack stack; 
    int choice, value; 
 
    while (true)  
    { 
        cout << "\nStack Menu:\n"; 
        cout << "1. Push\n"; 
        cout << "2. Pop\n"; 
        cout << "3. Display\n"; 
        cout << "4. Exit\n"; 
        cout << "Enter your choice: "; 
        cin >> choice; 
 
        switch (choice)  
        { 
            case 1: 
                cout << "Enter value to push onto the stack: "; 
                cin >> value; 
                stack.push(value); 
                break; 
            case 2: 
                stack.pop(); 
                break; 
            case 3: 
                stack.display(); 
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