#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>
#include <conio.h>
#define null -32
struct emps{
    int id;
    char name[30];
    int age;
};

void textattr(int i)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);

}
void gotoxy( int column, int line )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
  }


int main()
{

    char names [6][50]= {"new","display by index","display by id","display all","display by name","exit"};

    char ch;
    int n=0;
    int i;
    int flag = 0;
    int size;
    int index;
    int index2;
    printf("please enter the size of struct :");
    scanf("%d",&size);
    struct emps *ptr = (struct emp *)malloc(size * sizeof(struct emps));
    for (i=0;i<size;i++){

        ptr[i].id = -1;


    }
    do{
    system("cls");
    for (i=0;i<6;i++){
        gotoxy(10,10+i);
        if (i==n)
            textattr(0x74);
        _cprintf("%s",names[i]);
       textattr(0x07);}

    ch = _getch();
    switch (ch){
    case -32:
        ch =_getch();
        switch(ch){
          case 72:
              n--;
              if (n < 0)
                n=4;
              break;
          case 80:
              n++;
              if (n==6)
                n=0;
              break;
        }
    break;
    case 13:{
        system("cls");
        if (n==0){
            printf("add an employee please select the index : ");

            scanf("%d",&index);
            printf("The id of employee num %d ",index);
            scanf("%d",&ptr[index-1].id);
            printf("The name of employee num %d ",index);
            scanf("%s",ptr[index-1].name);
            printf("The age of employee num %d ",index);
            scanf("%d",&ptr[index-1].age);}

            else if (n==1){
            printf("display the item by index\n");
            printf("please select the index : ");
            scanf("%d",&index2);
            printf("\n \n The id of person %d is %d \n",index2+1,ptr[index2-1].id);
            printf("The name of person %d is %s \n",index2+1,ptr[index2-1].name);
            printf("The age of person %d is %d \n",index2+1,ptr[index2-1].age);}
            else if (n==2){
                int epm_id;
                printf("display the item by id\n");
                printf("please select the id : ");
                scanf("%d",&epm_id);
                for (i=0;i<size;i++){
                if (epm_id == ptr[i].id){
                    printf("\n \n The id of person is %d \n",ptr[i].id);
                    printf("The name of person is %s \n",ptr[i].name);
                    printf("The age of person is %d \n",ptr[i].age);} }}


            else if (n==3){
                printf("display the all item\n");

                for (i=0;i<size;i++){
                        if (ptr[i].id != -1){
                printf("\nThe id of person %d is %d \n",i+1,ptr[i].id);
                printf("The name of person %d is %s \n",i+1,ptr[i].name);
                printf("The age of person %d is %d \n",i+1,ptr[i].age);
                        }



                }

            }
            else if (n==4){
                char epm_name[30];
                printf("display the item by name\n");
                printf("please select the name as you enter it before : ");
                scanf("%s",epm_name);
                for (i=0;i<size;i++){
                        if (strcmpi(epm_name,ptr[i].name==0)){
                                if (ptr[i].id != -1){
                printf("\n \n The id of person is %d \n",ptr[i].id);
                printf("The name of person is %s \n",ptr[i].name);
                printf("The age of person is %d \n",ptr[i].age);}
                }}
            }
            else if (n==5){
            printf("exit");
            flag = 1;
            break;}


        }

    _getch();



    }

    }while (flag ==0);
    return 0;
}
