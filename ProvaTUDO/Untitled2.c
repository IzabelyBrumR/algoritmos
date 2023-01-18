#include <stdio.h>
#include <math.h>
#include <conio.h>

main(){

float juca = 1.10, chico = 1.70;
int cont = 0;

    do{
        chico = chico + 0.02;
        juca = juca + 0.03;

        cont++;
    }while(chico > juca);

printf("Demorou %d anos para juca passar chico\n", cont);
}
