/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main()
int m1,m2;
float ave;
{
   printf("Sub 1 mark:");
   scanf("%d\n", &m1);
   printf("Sub 2 mark:");
   scanf("%d\n", &m2);
   
   ave= (m1+m2)/2;
   printf("average= %.2f", &ave);
  
  return 0;
}

