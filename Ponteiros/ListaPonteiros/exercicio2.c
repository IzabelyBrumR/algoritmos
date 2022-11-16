#include <conio.h>
#include <stdio.h>

main(){

int *pnt, **pnt2, sub, sub2, pnt_var, pnt_var2;

pnt_var = &pnt;
pnt_var2 = &pnt2;

    printf("%d\n", &pnt);
    printf("%d\n", &pnt2);

    if(pnt_var > pnt_var2){

        sub = pnt_var - pnt_var2;
        printf("A subtracao eh: %d", sub);
    }
    else{
        sub2 = pnt_var2 - pnt_var;
        printf("A subtracao eh: %d", sub2);
    }


}
