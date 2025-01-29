#include <stdio.h>
void main()
{
  int maths,physics,chemistry,total,total_in_maths_and_physics;

  printf("Enter marks in maths out of 100:");
  scanf("%d",&maths);
  printf("Enter marks in physics out of 100:");
  scanf("%d",&physics);
  printf("Enter marks in chemistry out of 100:");
  scanf("%d",&chemistry);

  total=maths+physics+chemistry;
  printf("total marks is %d\n",total);
  total_in_maths_and_physics=maths+physics;

  if(maths>=60 && physics>=50 && chemistry>=40 && (total>=200 || total_in_maths_and_physics>=150))
  {
    printf("You are eligible");
  }
  else
  printf("You are not eligible");

}