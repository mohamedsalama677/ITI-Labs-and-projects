#include <stdio.h>
#include <stdlib.h>
struct emp{
    int id;
    char name[30];
    int age;
};

int main()
{
    int size;
    printf("please enter the size of the struct ");
    scanf("%d",&size);

    struct emp *ptr = (struct emp *)malloc(size * sizeof(struct emp));
    int i;
    for (i=0;i<size;i++){
        printf("The id of employee num %d ",i+1);
        scanf("%d",&ptr[i].id);
        printf("The name of employee num %d ",i+1);
        scanf("%s",ptr[i].name);
        printf("The age of employee num %d ",i+1);
        scanf("%d",&ptr[i].age);
    }
    for (i=0;i<size;i++){
        printf("\n \n The id of person %d is %d \n",i+1,ptr[i].id);
        printf("The name of person %d is %s \n",i+1,ptr[i].name);
        printf("The age of person %d is %d \n",i+1,ptr[i].age);



    }
    return 0;
}
