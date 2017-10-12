#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>


int main()
{
int scannum=0;
int numb=0;
int let=0;
char ch=0;

for (;;){
    srand(time(NULL));
    numb = rand() % 10;

    int i=0;
    for (i;i<3;i++){

        for (;;){

            printf("\n Enter positive numbers 0...10 : ");
            let= scanf("%d", &scannum);
            //not input letter
            if (scannum<0){
                printf("\n It's negative Numbers \n");
                continue;
               }
             /* не удалось правильно реализовать
              при первом заходе норм какб но если
              мы вводим 2,3 то косяк как сделать не могу понять
             */
             if (strchr ("0123456789", scannum)){
                printf("\n It's not numbers. Pls enter Number \n");
                getch();
                fflush(stdin);
                continue;

            }
             break;
        }

        if (scannum==numb){
            printf("Yahoo\n");
            break;
        }

        if (scannum<numb){
            printf("Lower numb! ");
        }

        if (scannum>numb){
            printf("Bigger numb! ");
        }
    }

        printf("\nContine or exit ?  Y/N ");
        scanf("%c", &ch);
        ch=getchar();
        if (( ch == 78 )|| ( ch == 110 )) {
        return 0;
       }
}
return 0;
}
