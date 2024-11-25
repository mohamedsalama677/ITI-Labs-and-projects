#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char f1name[10];
    char f2name[10];
    char fullname[22] = "";
    printf("please enter first name : ");
    scanf("%s",f1name);
    printf("please enter second name : ");
    scanf("%s",f2name);

    strcat(fullname,f1name);
    strcat(fullname,f2name);
    printf("your name is %s",fullname);
    return 0;
}
