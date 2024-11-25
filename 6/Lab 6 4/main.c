#include <stdio.h>
#include <stdlib.h>
void scan_arr(int* arr,int dim);
void print_arr(int*arr,int dim);
int sum_arr(int*arr,int dim);
int main()
{
    int arr[5] = {};
    int summation;
    scan_arr(arr,5);
    print_arr(arr,5);
    summation = sum_arr(arr,5);
    printf("\nThe sum of the matrix = %d",summation);
    return 0;
}
void scan_arr(int*arr,int dim){
        int i;
        for(i=0;i<dim;i++){
            printf("arr [%d] = ",i);
            scanf("%d",arr+i);
        }


}
void print_arr(int*arr,int dim){
        int i;
        printf("[");
        for(i=0;i<dim;i++){
            //printf("arr [%d] = ",i);
            printf("%d\t",*arr+i);
        }
        printf("]");


}
int sum_arr(int*arr,int dim){
        int i;
        int sum=0;
        for(i=0;i<dim;i++){
            sum+= *arr+i;
        }
        return sum;

}
