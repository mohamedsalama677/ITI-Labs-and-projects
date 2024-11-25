#include <stdio.h>
#include <stdlib.h>

int main()
{
      char z;
    do{
        printf("\nNew\n");
        printf("Display\n");
        printf("Exit\n");
        scanf(" %c",&z);
        switch(z){
           case 'n':
               printf("Item selected is new ");
           break;
           case 'd':
               printf("Item selected is display ");
            break;
           case 'e':
            break;

            _flushall();
            system("cls");
            scanf(" %c",&z);
           default:
            printf("please enter a valid input ");
            break;



        }
    }while (z != 'e');
    return 0;
}
