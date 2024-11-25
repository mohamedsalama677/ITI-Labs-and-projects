#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int revrese_num = 0;
    int remain;
    printf("please enter a number to reverse it : ");
    scanf("%d",&num);
    while (num !=0){
        remain = num%10;

        revrese_num = revrese_num*10 + remain;
        num /= 10;


    }
    printf("The new number is %d",revrese_num);

    return 0;
}
