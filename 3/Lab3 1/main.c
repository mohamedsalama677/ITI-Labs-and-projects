#include <stdio.h>
#include <stdlib.h>
#define size 5

int main()
{
    int arr[size];
    int i;
    int sum = 0;


    for(i=0;i<size;i++){
        printf("please enter num %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("[");

    for(i=0;i<size;i++)
        printf("%d, \t",arr[i]);

    printf("]");

    for(i=0;i<size;i++)
        sum+=arr[i];
    printf("\n sum = %d",sum);
    int max = arr[0];
    for(i=1;i<size;i++){
        if (max<arr[i])
            max = arr[i];
            }

    printf("\n The max = %d",max);
    int min = arr[0];
    for(i=1;i<size;i++){
        if (min>arr[i])
            min = arr[i];
            }
    printf("\nThe min = %d",min);
    return 0;
}
