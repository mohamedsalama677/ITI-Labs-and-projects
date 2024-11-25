#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int fact = 1;
    scanf("%d",&num);
    int i;
    for (i =1;i=num;i++){
        fact *= num;
        --num;

    }printf("the factorial = %d",fact);
    return 0;
}
