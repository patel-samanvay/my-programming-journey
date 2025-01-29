#include <stdio.h>
void main() {
    char str[100];
    int i, length;
    printf("Enter a string: ");
    scanf("%s", str);
    for (length = 0; str[length] != '\0'; length++);
    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}
