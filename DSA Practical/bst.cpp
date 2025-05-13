#include <iostream> 
#include <cstdlib>  
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
{ 
return new Node(v); 
        } else if (v < r->num) 
        { 
            r->left = insert(r->left, v); 
        } else if (v > r->num) 
        { 
            r->right = insert(r->right, v); 
        } else  
        { 
            cout << "\nError: Duplicate value!" << endl; 
            exit(0); 
        } 
        return r; 
    } 
 
    void search(Node* r, int v)  
    { 
        if (r == nullptr)  
        { 
            cout << "\nNumber does not exist" << endl; 
        } else if (v == r->num)  
        { 
            cout << "\nNumber found: " << v << endl; 
        } else if (v < r->num) 
        { 
            search(r->left, v); 
        } else  
        { 
            search(r->right, v); 
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
 
    void search(int val) 
    { 
        search(root, val); 
    } 
}; 
 
int main() 
{ 
    BST tree; 
int n, digit, k; 
cout << "How many numbers do you want to insert? "; 
cin >> n; 
for (int i = 0; i < n; i++) 
{ 
cout << "Data " << i + 1 << ": "; 
cin >> digit; 
tree.insert(digit); 
} 
cout << "Enter number to be searched: "; 
cin >> k; 
tree.search(k); 
return 0; 
} 