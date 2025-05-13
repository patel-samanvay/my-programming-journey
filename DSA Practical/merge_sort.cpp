#include <iostream> 
using namespace std; 
int b[20]; 
void merging(int low, int mid, int high, int a[]) 
{ 
int l1 = low, l2 = mid + 1, i = low; 
while (l1 <= mid && l2 <= high)  
{ 
if (a[l1] <= a[l2]) 
b[i++] = a[l1++]; 
else 
b[i++] = a[l2++]; 
} 
while (l1 <= mid) 
b[i++] = a[l1++]; 
while (l2 <= high) 
b[i++] = a[l2++]; 
for (int j = low; j <= high; j++) 
a[j] = b[j]; 
} 
void div(int low, int high, int a[]) 
{ 
if (low < high)  
{ 
int mid = (low + high) / 2; 
div(low, mid, a); 
div(mid + 1, high, a); 
merging(low, mid, high, a); 
} 
} 
int main()  
{ 
int s, a[20]; 
cout << "Enter size of array: "; 
cin >> s; 
cout << "Enter elements:\n"; 
for (int i = 0; i < s; i++) 
{ 
cin >> a[i]; 
} 
div(0, s - 1, a); 
cout << "\nList after sorting:\n"; 
for (int i = 0; i < s; i++)  
{ 
cout << a[i] << " -> "; 
} 
cout << "END\n"; 
return 0; 
} 