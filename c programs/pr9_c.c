#include <stdio.h>
void main() {
    int arr[5] = {10, 20, 30, 40, 50}; 
    int *ptr = arr;                   
    printf("Accessing array elements using pointers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i + 1, *(ptr + i));
    }
}
