#include <conio.h>
#include <stdio.h>

main(){

int m[100][100], i;
int *pnt;

pnt = m[0];

    for(i=0; i<4; i++){
        *pnt = 0.0;
        printf("%d\n", *pnt);
            pnt++;
    }
    for(i=0; i<10000; i++){
        (*pnt)++;
        printf("%d\n", *pnt);
    }


}
