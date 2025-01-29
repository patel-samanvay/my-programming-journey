#include<stdio.h>
#include<string.h>
void main()
{
  int i, l=0;
  char s1[100];
  printf("Enter a string:");
  gets(s1);
  for(i=0;s1[i]!='\0';i++)
  {
    l+=i;
  }
  printf("The length of string is %d",l);
}
