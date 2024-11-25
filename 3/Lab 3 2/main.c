#include <stdio.h>
#include <stdlib.h>
#define rows 3
#define coulmns 4
int main()
{
    int arr [rows][coulmns];
    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<coulmns;j++){
            printf("arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);}
            printf("\n");
    }
    printf("[");
    for(i=0;i<rows;i++){
        for(j=0;j<coulmns;j++)
            printf("%d \t",arr[i][j]);
       printf("\n");

       }printf("]");
    int sum[rows] = {0,0,0};
    for(i=0;i<rows;i++){
        for(j=0;j<coulmns;j++){
            sum[i] += arr[i][j];}

    }
    for(i=0;i<rows;i++){
        printf("\n The sum of row %d = %d",i,sum[i]);
    }
    return 0;
}
