#include <iostream> 
using namespace std; 
void quickSort(int x[], int first, int last)  
{ 
int i, j, pivot, temp; 
if (first < last) 
{ 
pivot = first; 
i = first; 
j = last; 
while (i < j) 
{ 
while (x[i] <= x[pivot] && i < last) 
i++; 
while (x[j] > x[pivot]) 
j--; 
if (i < j)  
{ 
temp = x[i]; 
x[i] = x[j]; 
x[j] = temp; 
} 
} 
temp = x[pivot]; 
x[pivot] = x[j]; 
x[j] = temp; 
quickSort(x, first, j - 1); 
quickSort(x, j + 1, last); 
} 
} 
int main()  
{ 
int size, x[20]; 
cout << "Enter number of values to sort (max 20): "; 
cin >> size; 
cout << "Enter values to be sorted:\n"; 
for (int i = 0; i < size; i++)  
{ 
cin >> x[i]; 
} 
quickSort(x, 0, size - 1); 
cout << "\nSorted array: "; 
for (int i = 0; i < size; i++)  
{ 
cout << x[i] << " -> "; 
} 
cout << "END\n"; 
return 0; 
} 