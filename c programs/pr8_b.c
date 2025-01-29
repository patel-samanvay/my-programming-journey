#include<stdio.h>
struct book{
  char title[50];
  char author[50];
  int price;
  };
void main()
{
  struct book books[3];
  int i,maxIndex = 0, minIndex = 0;
  printf("Enter the details of book:\n");
  for(i=1;i<=3;i++)
  {
    printf("Enter the title of book %d:",i);
    scanf("%s",&books[i].title);
    printf("Enter the author of book %d:",i);
    scanf("%s",&books[i].author);
    printf("Enter the price of book %d:",i);
    scanf("%d",&books[i].price);
  }
  for (i = 1; i < 3; i++) {
        if (books[i].price > books[maxIndex].price) {
            maxIndex = i;
        }
        if (books[i].price < books[minIndex].price) {
            minIndex = i;
        }
    }
    printf("\nMost Expensive Book:\n");
    printf("Title: %s\n", books[maxIndex].title);
    printf("Author: %s\n", books[maxIndex].author);
    printf("Price: %d\n", books[maxIndex].price);
    printf("\nLowest Priced Book:\n");
    printf("Title: %s\n", books[minIndex].title);
    printf("Author: %s\n", books[minIndex].author);
    printf("Price: %.d\n", books[minIndex].price);
}
