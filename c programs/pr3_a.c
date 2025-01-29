#include<stdio.h>
void main()
{
  int month,year;
  printf("Enter the number of month(1-12):");
  scanf("%d",&month);

  switch(month)
  {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
     printf("The number of days are 31\n");
     break;
    case 4:
    case 6:
    case 9:
    case 11:
     printf("The number of days are 30\n");
     break;
    case 2:
    printf("enter your year:");
    scanf("%d",&year);
    if(year%4==0)
    {
      printf("The number of days are 29\n");
    }
    else
    printf("The number of days are 28\n");
    default:
     printf("Month invalid please choose between 1 to 12\n");
  }
}