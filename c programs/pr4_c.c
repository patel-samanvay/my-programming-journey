#include<stdio.h>
void main()
{
int a, b, c, d, e, largest;
printf("Enter five numbers: ");
scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

  
largest = (a > b ? (a > c ? (a > d ? (a > e ? a : e) : (d > e ? d : e)) 
                          : (c > d ? (c > e ? c : e) : (d > e ? d : e)))
                 : (b > c ? (b > d ? (b > e ? b : e) : (d > e ? d : e)) 
                          : (c > d ? (c > e ? c : e) : (d > e ? d : e))));


    printf("The largest number is: %d\n", largest);
}