#include<stdio.h>
void main()
{
  int i,m,n,sum=m;
  printf("Enter your starting number:");
  scanf("%d",&m);
  printf("Enter your ending number:");
  scanf("%d",&n);

  for(i=m;i<=n;i++)
  {
    sum+=i;
  }
  printf("The sum all numbers from %d to %d is %d",m,n,sum);
}