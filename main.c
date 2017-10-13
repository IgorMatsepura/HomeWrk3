#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>


int main()
{
int scannum;
int numb = 0;
int let;
char ch = 0;

for (;;){
    srand(time(NULL));
    numb = rand() % 10;
    int i=0;
    for (i;i<3;i++){
        for (;;){
            printf("\n Enter positive numbers 0...10 : ");
            let = scanf("%d", &scannum);
            if (scannum<0){
                printf("\n It's negative Numbers\n");
                continue;
            }
        break;
        }

        if ((scannum == numb) && (let == 1)) {
            printf("Yahoo\n");
            break;
        }

        if ((scannum<numb) && (let == 1)){
            printf("Lower numb! ");
        }

        if ((scannum>numb) && (let == 1)){
            printf("Bigger numb! ");
        }

        if (let == 0) {
            printf("\n It's letter input number... \n");
            break;
            continue;
        }
    }

    printf("\nContine or exit ?  Y/N ");
    scanf("%c", &ch);
    ch=getchar();
    if (( ch == 78 ) || ( ch == 110 )) {
    return 0;
    }
}

return 0;
}
