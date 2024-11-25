#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int flag;
    scanf(" %d",&num);

    int i;
    while(num>2){
    for(i=2;i< num-1;i++){
        if (num %i == 0 ){
            flag =0;
            break;}
        else
            flag=1;
    }
    if (flag)
        printf("\nthe number is prime %d\t ",num);
        num =num -2;
    }

    return 0;
}
