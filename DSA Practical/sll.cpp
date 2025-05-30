#include <iostream> 
using namespace std; 
struct Node 
{ 
int data; 
Node* next; 
}; 
class SinglyLinkedList  
{ 
Node* head; 
    public: 
    SinglyLinkedList()  
    { 
        head = nullptr; 
    } 
 
    void insertAtFirst(int value)  
    { 
        Node* newNode = new Node(); 
        newNode->data = value; 
        newNode->next = head; 
        head = newNode; 
        cout << value << " inserted at the beginning.\n"; 
    } 
 
    void insertAtLast(int value) 
    { 
        Node* newNode = new Node(); 
        newNode->data = value; 
        newNode->next = nullptr; 
 
        if (head == nullptr) 
        { 
            head = newNode; 
        }  
        else 
        { 
            Node* temp = head; 
            while (temp->next != nullptr)  
            { 
                temp = temp->next; 
            } 
            temp->next = newNode; 
        } 
        cout << value << " inserted at the end.\n"; 
    } 
 
    void insertAtPosition(int value, int position) 
    { 
        Node* newNode = new Node(); 
        newNode->data = value; 
         
        if (position == 1) 
        { 
            newNode->next = head; 
            head = newNode; 
            cout << value << " inserted at position " << position << ".\n"; 
            return; 
        } 

        Node* temp = head; 
        for (int i = 1; temp != nullptr && i < position - 
1; i++)  
        { 
            temp = temp->next; 
        } 
 
        if (temp == nullptr)  
        { 
            cout << "Position out of range.\n"; 
            return; 
        } 
 
        newNode->next = temp->next; 
        temp->next = newNode; 
        cout << value << " inserted at position " << position << ".\n"; 
    } 
 
    void deleteAtFirst()  
    { 
        if (head == nullptr) 
        { 
            cout << "List is empty, cannot delete.\n"; 
            return; 
        } 
 
        Node* temp = head; 
        head = head->next; 
        delete temp; 
        cout << "Node at the beginning deleted.\n"; 
    } 
 
    void deleteAtLast() 
    { 
        if (head == nullptr) 
        { 
            cout << "List is empty, cannot delete.\n"; 
            return; 
        } 
 
        if (head->next == nullptr) 
        { 
            delete head; 
            head = nullptr; 
            cout << "Node at the end deleted.\n"; 
            return; 
        } 
 
        Node* temp = head; 
        while (temp->next != nullptr && temp->next->next != 
nullptr) 
        { 
            temp = temp->next; 
        } 
 
        delete temp->next; 
        temp->next = nullptr; 
        cout << "Node at the end deleted.\n"; 
    } 
 
    void deleteAtPosition(int position) 
    { 
        if (head == nullptr)  
        { 
            cout << "List is empty, cannot delete.\n"; 
            return; 
        } 
 
        if (position == 1) 
        { 
            Node* temp = head; 
            head = head->next; 
            delete temp; 
            cout << "Node at position " << position << " deleted.\n"; 
            return; 
        } 
 
        Node* temp = head; 
        for (int i = 1; temp != nullptr && i < position - 
1; i++)  
        { 
            temp = temp->next; 
        } 
 
        if (temp == nullptr || temp->next == nullptr)  
        { 
            cout << "Position out of range.\n"; 
            return; 
        } 
 
        Node* toDelete = temp->next; 
        temp->next = temp->next->next; 
        delete toDelete; 
        cout << "Node at position " << position << " deleted.\n"; 
    } 
 
    void display()  
    { 
        if (head == nullptr)  
        { 
            cout << "List is empty.\n"; 
            return; 
        } 
 
        Node* temp = head; 
        int pos = 1; 
        while (temp != nullptr)  
        { 
            cout << "Position " << pos << ": " << temp->data << " -> "; 
            temp = temp->next; 
            pos++; 
        } 
        cout << "NULL\n"; 
    } 
}; 
 
int main()  
{ 
    SinglyLinkedList list; 
    int choice, value, position; 
 
    while (true) 
    { 
        cout << "\nMenu:\n"; 
        cout << "1. Insert at beginning\n"; 
        cout << "2. Insert at end\n"; 
        cout << "3. Insert at position\n"; 
        cout << "4. Delete at beginning\n"; 
        cout << "5. Delete at end\n"; 
        cout << "6. Delete at position\n"; 
        cout << "7. Display\n"; 
        cout << "8. Exit\n"; 
        cout << "Enter your choice: "; 
        cin >> choice; 
 
        switch (choice) 
        { 
        case 1: 
            cout << "Enter value to insert at beginning: "; 
            cin >> value; 
            list.insertAtFirst(value); 
            break; 
        case 2: 
            cout << "Enter value to insert at end: "; 
            cin >> value; 
            list.insertAtLast(value); 
            break; 
        case 3: 
cout << "Enter value to insert and position: "; 
cin >> value >> position; 
list.insertAtPosition(value, position); 
break; 
case 4: 
list.deleteAtFirst(); 
break; 
case 5: 
list.deleteAtLast(); 
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
cout << "Exiting program.\n"; 
return 0; 
default: 
cout << "Invalid choice. Please try again.\n"; 
} 
} 
return 0; 
}