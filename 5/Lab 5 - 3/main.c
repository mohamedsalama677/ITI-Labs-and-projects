#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct emp {
    int id;
    char name[30];
    int age;
};

int main()
{
    struct emp e1;
    printf("please enter your id= \n");
    scanf("%d",&e1.id);
    printf("please enter your age = \n");
    scanf("%d",&e1.age);
    printf("please enter your name = \n");
    scanf("%s",e1.name);
    printf("Id = %d , Name = %s, Age = %d",e1.id, e1.name, e1.age);
    return 0;
}
