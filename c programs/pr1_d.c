#include<stdio.h>
void main()
{
  float a,b,c,d,e,f;
  printf("Enter first number:");
  scanf("%f",&a);
  printf("Enter second number:");
  scanf("%f",&b);
  c=a+b;
  d=a-b;
  e=a*b;
  f=a/b;
  printf("The sum is %f\n",c);
  printf("The subtraction is %f\n",d);
  printf("The product is %f\n",e);
  printf("The division is %f",f);

}