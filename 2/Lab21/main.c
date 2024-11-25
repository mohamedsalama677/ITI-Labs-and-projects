#include <stdio.h>
#include <stdlib.h>

int main()
{
   float degree;
   printf("please enter your degree : ");
   scanf("%f",&degree);
   if(degree >=85){
    printf("Congratulations your grade is excellent");
   }
   else if (degree>= 75 && degree < 85){

    printf("Congratulations your grade is very good");
   }
   else if (degree >= 65 && degree < 75){
    printf("Congratulations your grade is good");
   }
   else if (degree >= 60 && degree < 65){
    printf("Your grade is acceptable try to enhance it next time");
   }
   else{
    printf("You fail good luck next time");
   }
}
