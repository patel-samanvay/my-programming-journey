#include <iostream> 
using namespace std; 
int main() 
{ 
int ele, l[10], flag = 1, n, i, mid, first, last; 
cout << "Enter the size of the list: "; 
cin >> n; 
cout << "Enter the list (sorted in ascending order):" << 
endl; 
for (i = 0; i < n; i++)  
{ 
cin >> l[i]; 
} 
cout << "Enter the element you want to search: "; 
cin >> ele; 
first = 0; 
last = n - 1; 
mid = (first + last) / 2; 
while (first <= last) 
{ 
if (l[mid] == ele)  
{ 
flag = 0; 
break; 
} else if (l[mid] > ele) 
{ 
last = mid - 1; 
} else 
{ 
first = mid + 1; 
} 
mid = (first + last) / 2; 
} 
if (flag == 0) 
cout << "Element found at index: " << mid << endl; 
else 
cout << "Element not found." << endl; 
return 0; 
}