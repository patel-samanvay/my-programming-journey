#include<iostream> 
using namespace std; 
struct Node  
{ 
int data; 
Node* next; 
}; 
class CircularLinkedList 
{ 
Node* head; 
public: 
CircularLinkedList() 
{ 
        head = nullptr; 
    } 
 
    Node* createNode(int value)  
    { 
        Node* newNode = new Node(); 
        newNode->data = value; 
        newNode->next = nullptr; 
        return newNode; 
    } 
 
    void insertFirst(int value)  
    { 
        Node* newNode = createNode(value); 
        if (head == nullptr)  
        { 
            head = newNode; 
            head->next = head; 
        } 
        else  
        { 
            Node* temp = head; 
            while (temp->next != head)  
            { 
                temp = temp->next; 
            } 
            temp->next = newNode; 
            newNode->next = head; 
            head = newNode; 
        } 
    } 
 
    void insertLast(int value) 
    { 
        Node* newNode = createNode(value); 
        if (head == nullptr)  
        { 
            head = newNode; 
            head->next = head; 
        } 
        else 
        { 
            Node* temp = head; 
            while (temp->next != head)  
            { 
                temp = temp->next; 
            } 
            temp->next = newNode; 
            newNode->next = head; 
        } 
    } 
    void insertAtPosition(int value, int position) 
    { 
        if (position == 1)  
        { 
            insertFirst(value); 
            return; 
        } 
 
        Node* newNode = createNode(value); 
        Node* temp = head; 
        int count = 1; 
 
        while (temp != nullptr && count < position - 1) 
        { 
            temp = temp->next; 
            count++; 
        } 
 
        if (temp == nullptr)  
        { 
            cout << "Position out of bounds!" << endl; 
            return; 
        } 
 
        newNode->next = temp->next; 
        temp->next = newNode; 
    } 
 
    void deleteFirst()  
    { 
        if (head == nullptr)  
        { 
            cout << "List is empty!" << endl; 
            return; 
        } 
        if (head->next == head) 
        {   
            delete head; 
            head = nullptr; 
        }  
        else  
        { 
            Node* temp = head; 
            while (temp->next != head) 
            { 
                temp = temp->next; 
            } 
            Node* toDelete = head; 
            temp->next = head->next; 
            head = head->next; 
            delete toDelete; 
        } 
    } 
 
    void deleteLast() 
    { 
        if (head == nullptr)  
        { 
            cout << "List is empty!" << endl; 
            return; 
        } 
        if (head->next == head) 
        {   
            delete head; 
            head = nullptr; 
        }  
        else  
        { 
            Node* temp = head; 
            while (temp->next->next != head) 
            { 
                temp = temp->next; 
            } 
            Node* toDelete = temp->next; 
            temp->next = head; 
            delete toDelete; 
        } 
    } 
 
    void deleteAtPosition(int position) 
    { 
        if (position == 1)  
        { 
            deleteFirst(); 
            return; 
        } 
 
        Node* temp = head; 
        int count = 1; 
 
        while (temp != nullptr && count < position - 1)  
        { 
            temp = temp->next; 
            count++; 
        } 
 
        if (temp == nullptr || temp->next == head)  
        { 
            cout << "Position out of bounds!" << endl; 
            return; 
        } 
        Node* toDelete = temp->next; 
        temp->next = temp->next->next; 
        delete toDelete; 
    } 
 
    void display()  
    { 
        if (head == nullptr)  
        { 
            cout << "List is empty!" << endl; 
            return; 
        } 
        Node* temp = head; 
        do  
        { 
            cout << temp->data << " "; 
            temp = temp->next; 
        }  
        while (temp != head); 
        cout << endl; 
    } 
}; 
 
int main() 
{ 
    CircularLinkedList list; 
    int choice, value, position; 
 
    while (true)  
    { 
        cout << "\nMenu: \n"; 
        cout << "1. Insert at first\n"; 
        cout << "2. Insert at last\n"; 
        cout << "3. Insert at specific position\n"; 
        cout << "4. Delete at first\n"; 
        cout << "5. Delete at last\n"; 
        cout << "6. Delete at specific position\n"; 
        cout << "7. Display list\n"; 
        cout << "8. Exit\n"; 
        cout << "Enter your choice: "; 
        cin >> choice; 
 
        switch (choice)  
        { 
            case 1: 
                cout << "Enter value to insert at first: "; 
                cin >> value; 
                list.insertFirst(value); 
                break; 
            case 2: 
                cout << "Enter value to insert at last: "; 
                cin >> value; 
                list.insertLast(value); 
                break; 
            case 3: 
                cout << "Enter value to insert: "; 
                cin >> value; 
                cout << "Enter position: "; 
                cin >> position; 
                list.insertAtPosition(value, position); 
                break; 
            case 4: 
                list.deleteFirst(); 
                break; 
            case 5: 
                list.deleteLast(); 
                break; 
            case 6: 
                cout << "Enter position to delete: "; 
                cin >> position; 
                list.deleteAtPosition(position); 
                break; 
            case 7: 
                list.display(); 
                break; 
            case 8: 
                exit(0); 
            default: 
                cout << "Invalid choice! Please try again.\n"; 
        } 
    } 
 
    return 0; 
}