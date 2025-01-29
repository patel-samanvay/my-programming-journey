#include<stdio.h>
void main()
{
  int i,sum=0,n,a;
  printf("How many numbers you want to take average of?");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("Enter number %d:\n",i);
    scanf("%d",&i);
    sum+=i;
  }
  printf("The average = %d",sum/n);
}