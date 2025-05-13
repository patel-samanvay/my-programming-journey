#include <iostream> 
using namespace std; 
class Node  
{ 
public: 
int num; 
Node* left; 
Node* right; 
Node(int val)  
    { 
        num = val; 
        left = right = nullptr; 
    } 
}; 
 
class BST 
{ 
private: 
    Node* root; 
 
    Node* insert(Node* r, int v)  
    { 
        if (r == nullptr) 
            return new Node(v); 
        if (v < r->num) 
            r->left = insert(r->left, v); 
        else if (v > r->num) 
            r->right = insert(r->right, v); 
        else 
        { 
            cout << "\nError: Duplicate value!\n"; 
            exit(0); 
        } 
        return r; 
    } 
 
    void inorder(Node* r)  
    { 
        if (r != nullptr)  
        { 
            inorder(r->left); 
            cout << r->num << " "; 
            inorder(r->right); 
        } 
    } 
 
    void preorder(Node* r)  
    { 
        if (r != nullptr)  
        { 
            cout << r->num << " "; 
            preorder(r->left); 
            preorder(r->right); 
        } 
    } 
 
    void postorder(Node* r)  
    { 
        if (r != nullptr) 
        { 
            postorder(r->left); 
            postorder(r->right); 
            cout << r->num << " "; 
        } 
    } 
 
public: 
    BST()  
    { 
        root = nullptr; 
    } 
 
    void insert(int val) 
    { 
        root = insert(root, val); 
    } 
 
    void displayInorder() 
    { 
        cout << "Inorder: "; 
        inorder(root); 
        cout << endl; 
    } 
 
    void displayPreorder()  
    { 
        cout << "Preorder: "; 
        preorder(root); 
        cout << endl; 
    } 
 
    void displayPostorder()  
    { 
        cout << "Postorder: "; 
        postorder(root); 
        cout << endl; 
    } 
}; 
 
int main()  
{ 
    BST tree; 
    int n, digit, choice; 
 
    cout << "How many numbers do you want to insert? "; 
    cin >> n; 
 
    for (int i = 0; i < n; i++) 
    { 
        cout << "Enter data " << i + 1 << ": "; 
        cin >> digit; 
tree.insert(digit); 
} 
do { 
cout << "\nMenu:\n"; 
cout << "1. Inorder\n2. Preorder\n3. Postorder\n4. Exit\n"; 
cout << "Enter your choice: "; 
cin >> choice; 
switch (choice) 
{ 
case 1: tree.displayInorder(); break; 
case 2: tree.displayPreorder(); break; 
case 3: tree.displayPostorder(); break; 
case 4: cout << "Exiting...\n"; break; 
default: cout << "Invalid choice!\n"; break; 
} 
} while (choice != 4); 
return 0; 
}