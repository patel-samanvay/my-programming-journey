#include <stdio.h>

int main() {
    int n, i, pos, element;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the position where you want to insert the element (1 to %d): ", n + 1);
    scanf("%d", &pos);
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    for (i = n; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = element;
    n++;
    printf("\nThe array after insertion is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
