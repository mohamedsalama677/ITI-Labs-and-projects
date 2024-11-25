#include <stdio.h>
#include <stdlib.h>

int main()
{
   int month;
   printf("Please enter the month : ");
   scanf("%d",&month);
   if(month == 4 || month == 6 || month == 9 || month == 11 )
       printf("This month has 30 days");
   else if (month == 2)
       printf("This month has 28 days");
   else if (month > 12 )
       printf("Please enter a right month");
   else
       printf("this month has 31 days");
}
