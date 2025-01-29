#include <stdio.h>
void main()
{
    int n, i;
    float sum = 0, average;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    

    int arr[n]; 
    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    average = sum / n;
    printf("\nThe sum of all elements is: %.2f\n", sum);
    printf("The average of all elements is: %.2f\n", average);  
}