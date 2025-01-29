#include <stdio.h>
void main() {
    int num = 10;   
    int *ptr = &num;   
    printf("Value of num: %d\n", *ptr);
    printf("Address of num: %p\n", ptr);
}
