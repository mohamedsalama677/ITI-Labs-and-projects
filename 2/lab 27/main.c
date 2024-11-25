#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int flag;
    scanf(" %d",&num);
    int i;
    for(i=2;i< num-1;i++){
        if (num %i == 0 ){
            flag =0;
            break;}
        else
            flag=1;
    }
    if (flag)
        printf("the number is prime");
    else
        printf("the number is not prime");

    return 0;
}
