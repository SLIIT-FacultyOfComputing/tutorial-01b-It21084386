/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

include <stdio.h>


int main(void)
 { int mark1,mark2;
   float total,avg;
  printf("enter 2 marks");
  scanf("%d %d",&mark1,&mark2);
  total=mark1+mark2;
  avg=total/2;
  printf("the avg is %f ",avg);
  return 0;
 }
