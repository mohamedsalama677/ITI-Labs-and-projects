#include <stdio.h>
#include <stdlib.h>
int fact(int num);

int main()
{
    int num_user;
    int result;
    printf("Please enter the number : ");
    scanf("%d",&num_user);
    result = fact(num_user);
    printf("The factorial of your number = %d",result);
    return 0;
}
int fact(int num){

    int fact = 1;

    int i;
    for (i =1;i=num;i++){
        fact *= num;
        --num;}
    return fact;
}
