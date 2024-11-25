#include <stdio.h>
#include <stdlib.h>
void swap(int* ptrx,int*ptry);
int main()
{
    int x;
    int y;
    printf("please enter the first number : ");
    scanf("%d",&x);
    printf("Please enter the second number : ");
    scanf("%d",&y);
    swap(&x,&y);
    printf("x = %d , y = %d",x,y);

    return 0;
}
void swap(int* ptrx,int*ptry){
        int temp =0;
        temp = *ptrx;
        *ptrx = *ptry;
        *ptry = temp;


}
