#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    float sum =0;
    int i;
    for (i=0;i<5;i++){
        scanf("%f",&num);
        sum += num;
    }
    printf("the sum = %f",sum);
    return 0;
}
