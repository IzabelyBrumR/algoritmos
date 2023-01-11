#include<conio.h>
#include<stdio.h>
#include<math.h>

main(){

float altura_chico = 1.70, altura_juca = 1.10;
int contador = 0;

    do{
        altura_chico = altura_chico + 0.2;
        altura_juca = altura_juca + 0.3;

        contador++;
    } while(altura_chico > altura_juca);

    printf("Demorou %d anos para juca ser maior que o chico\n");

}
