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
    struct emp employs = {};
    struct emp* ptr = &employs;
        printf("please enter the id of the employee\n");
        scanf("%d",&(ptr->id));
        printf("please enter the name of the employee\n");
        scanf("%s",(ptr->name));
        printf("please enter the age  of the employee\n");
        scanf("%d",(&ptr->age));

        printf("\n the id of the employee= %d \n ",ptr->id);
        printf("the name of the employee = %s \n",ptr->name);
        printf("the age  of the employee = %d\n ",ptr->age);
    return 0;
}




