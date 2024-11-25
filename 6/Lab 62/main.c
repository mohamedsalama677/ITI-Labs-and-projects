#include <stdio.h>
#include <stdlib.h>
int get_max(int x,int y);
int main()
{
    int num1;
    int num2;
    int result=0;
    printf("This program to find the maximum number\n");
    printf("Please enter the first number : \n");
    scanf("%d",&num1);
    printf("Please enter the second number : \n");
    scanf("%d",&num2);
    result = get_max(num1,num2);
    if (result != 1)
        printf("The maximum number = %d",result);
    return 0;
}
int get_max(int x,int y){

     if (x>y)
        return x;
    else if (x==y)
        printf("The number are equal");
        return 1;

    return y;
}
