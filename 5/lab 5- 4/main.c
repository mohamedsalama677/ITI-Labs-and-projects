#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    int* ptrx=& x;
    int* ptry=& y;


    printf("please enter the point that describe the dimension 1 : \n ");
    scanf("%d",ptrx);
    printf("please enter the point that describe the dimension 2 : \n ");
    scanf("%d",ptry);
    printf("the point is (%d,%d)",x,y);
    return 0;
}
