#include <stdio.h>
#include <stdlib.h>

struct emp{
  int id;
  char name[30];
  int age;


};
int main()
{
    int i;
    struct emp employs[5];
    for(i = 0; i< 5; i++){
        printf("please enter the id of the %d employee\n",i);
        scanf("%d",&employs[i].id);
        printf("please enter the name of the %d employee\n",i);
        scanf("%s",employs[i].name);
        printf("please enter the age  of the %d employee\n",i);
        scanf("%d",&employs[i].age);
        }
     for(i = 0; i< 5; i++){
        printf("please enter the id of the %d employee =%d \n",i,employs[i].id);
        printf("please enter the name of the %d employee = %s5\n",i,employs[i].name);
        printf("please enter the age  of the %d employee = %d \n",i,employs[i].age);
        }
    return 0;
}




