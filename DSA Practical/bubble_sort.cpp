#include <iostream> 
using namespace std; 
int main() 
{ 
int i, step, n, temp, a[100]; 
cout << "Enter the number of elements you want to insert: "; 
cin >> n; 
for (i = 0; i < n; i++)  
{ 
cout << "Data " << i + 1 << ": "; 
cin >> a[i]; 
} 
for (step = 0; step < n - 1; ++step)  
{ 
for (i = 0; i < n - step - 1; ++i) 
{ 
if (a[i] > a[i + 1]) 
{ 
temp = a[i]; 
a[i] = a[i + 1]; 
a[i + 1] = temp; 
} 
} 
} 
cout << "\nBubble Sorted Array: "; 
for (i = 0; i < n; ++i)  
{ 
cout << a[i]; 
if (i != n - 1) cout << ", "; 
} 
cout << endl; 
return 0; 
} 