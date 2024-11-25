#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("please enter the dim of the array");
    scanf("%d",&size);
    int* ptr =(int*)malloc(size * sizeof(int));
    int i;
    for (i=0;i<size;i++){
        printf("arr[%d] =",i);
        scanf("%d",&ptr[i]);
    }
    printf("[");
    for (i=0;i<size;i++){
        printf("%d \t",ptr[i]);

    }
    printf("]");
    return 0;
}
