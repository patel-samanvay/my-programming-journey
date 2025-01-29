#include<stdio.h>
void main()
{
  float units,bill,surcharge;
  
  printf("Enter your units:");
  scanf("%f",&units);

  if(units<=50)
  {
    bill=0.5*units;
  }
  else if(units<=150)
  {
    bill=((0.5*50)+(units-50)*0.75);
  }
  else if(units<=250)
  {
    bill=((0.5*50)+(100*0.75)+(units-150)*1.2);
  }
  else
  {
    bill=((50*0.50)+(100*0.75)+(100*1.20)+((units-250)*1.50));
  }
  surcharge=bill*0.2;
  bill+=surcharge;

  printf("Total electricity bill is:%f",bill);
}