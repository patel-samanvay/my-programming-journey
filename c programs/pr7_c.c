#include <stdio.h>
void main() {
    char str[100], ch;
    int i, count = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter the character to count: ");
    scanf(" %c", &ch);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("The character '%c' appears %d times in the string.\n", ch, count);
}
