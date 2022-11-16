#include <stdio.h>
#include <conio.h>

main(){

int *pnt, **pnt2, n;

    printf("Entre com um numero:\n");
    scanf("%d", &n);

    pnt = &n;
    pnt2 = &pnt;

    printf("%d", pnt2);



}
