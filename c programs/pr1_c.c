#include<stdio.h>
void main()
{
  float a,b,area,circumference;
  printf("Enter radius of circle:");
  scanf("%f",&a);
  area=3.14*a*a;
  circumference=3.14*2*a;
  printf("The area of the circle is: %f",area);
  printf("\nThe circumference of the circle is:%f",circumference);
}