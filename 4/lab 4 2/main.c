#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>
#include <conio.h>
#define null -32

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
    char names [3][10]= {"new","display","exit"};
    char ch;
    int n=0;
    int i;
    int flag = 0;
    do{
    system("cls");
    for (i=0;i<3;i++){
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
                n=2;
              break;
          case 80:
              n++;
              if (n>2)
                n=0;
              break;
        }
    break;
    case 13:
        system("cls");
        if (n==0)
            printf("new item selected");
        else if (n==1)
            printf("display the item");
        else if (n==2){
            printf("exit");
            flag = 1;
            break;
        }
        _getch();

    case 27:
        flag =1;
        break;


    }

    }while (flag ==0);
    return 0;
}
