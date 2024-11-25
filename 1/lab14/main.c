#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("This program to add,subtract and multiply two numbers \n");
   float x;
   float y;
   printf("please enter the first number : \n");
   scanf("%f",&x);
   printf("please enter the second number : \n");
   scanf("%f",&y);

   printf("The addition of the two numbers = %f \n",x+y);
   printf("The subtraction of the numbers = %f \n",x-y);
   printf("The multiplication of the numbers = %f \n",x*y);
}
