#include <stdio.h>
#include <stdlib.h>
void malloc_() 
{
    int i, *ptr1, m;
    printf("Enter the number of elements: ");
    scanf("%d", &m);
    ptr1 = (int*)malloc(m * sizeof(int));
    printf("Memory allocated successfully using malloc()\n");
    for (i = 0; i < m; i++) 
    {
      printf("Enter element %d: ", i + 1);
      scanf("%d", &ptr1[i]);
    }
    printf("Elements are:\n");
    for (i = 0; i < m; i++) 
    {
      printf("%d\n", ptr1[i]);
    }
    free(ptr1);
}
void calloc_() 
{
    int j, *ptr2, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    ptr2 = (int*)calloc(n, sizeof(int));
    printf("Memory allocated successfully using calloc()\n");
    for (j = 0; j < n; j++) 
    {
      printf("Enter element %d: ", j + 1);
      scanf("%d", &ptr2[j]);
    }
    printf("Elements are:\n");
    for (j = 0; j < n; j++) 
    {
      printf("%d\n", ptr2[j]);
    }
    free(ptr2);
}
int main() 
{
    malloc_();
    calloc_();
    return 0;
}
