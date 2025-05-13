#include <iostream> 
#include <string> 
using namespace std; 
struct Stack  
{ 
    char arr[100]; 
    int top = -1;   
 
    void push(char c)  
    { 
        top++; 
        arr[top] = c; 
    } 
 
    char pop()  
    { 
        if (top == -1) return '\0';  
        char c = arr[top]; 
        top--; 
        return c; 
    } 
    char peek()  
    { 
        if (top == -1) return '\0'; 
        return arr[top]; 
    } 
 
    int isEmpty()  
    { 
        return top == -1; 
    } 
}; 
 
int precedence(char c)  
{ 
    if (c == '+' || c == '-')  
        return 1; 
    if (c == '*' || c == '/')  
        return 2; 
    return 0; 
} 
 
string infixToPostfix(string infix)  
{ 
    Stack s; 
    string postfix = ""; 
 
    for (int i = 0; i < infix.length(); i++)  
    { 
        char c = infix[i]; 
 
        if (isalnum(c))  
        { 
            postfix += c; 
        } 
        else if (c == '(')  
        { 
            s.push(c); 
        } 
        else if (c == ')')  
        { 
            while (s.isEmpty() == 0 && s.peek() != '(')  
            { 
                postfix += s.pop(); 
            } 
            s.pop(); 
        } 
        else  
        { 
            while (s.isEmpty() == 0 && 
precedence(s.peek()) >= precedence(c))  
            {
                postfix += s.pop(); 
            } 
            s.push(c); 
        } 
    } 
 
    while (s.isEmpty() == 0)  
    { 
        postfix += s.pop(); 
    } 
 
    return postfix; 
} 
 
int main()  
{ 
    string infix; 
    cout << "Enter an infix expression: "; 
    cin >> infix; 
 
    string postfix = infixToPostfix(infix); 
 
    cout << "Postfix expression: " << postfix << endl; 
 
    return 0; 
}