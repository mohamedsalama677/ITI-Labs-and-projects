#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1;
    char op;
    float num2;
    printf("Please enter the first number :\n");
    scanf("%f",&num1);
    printf("please enter the operator :\n");
    scanf(" %c",&op);
    printf("please enter the second number : \n");
    scanf("%f",&num2);
    switch(op){
    case '+':
        printf("The sum of the numbers = %f",num1+num2);

        break;
    case '-':
        printf("The subtraction of the numbers = %f ",num1-num2);
        break;
    case '*':
        printf("The multiplication of the numbers = %f",num1*num2);
        break;
    case '/':
        if(num2 == 0){
            printf("No division in zero");
            break;}
        else
            printf("The division of the numbers = %f",num1/num2);
            break;

    _flushall();
    default:
       printf("Please enter a right operator");
       break;


    }



}
