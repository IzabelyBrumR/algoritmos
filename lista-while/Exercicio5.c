#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

int a = 5000000, b = 7000000;
float NA, NB;
int anos = 0;
int d;

printf("Se voce quiser saber quanto tempo vai demorar para o pais a passar o b digite 0:\n");
scanf("%d", &d);

while(b > a){

    NA = a * 0.03;

    NB = b * 0.02;

    a = a + NA;

    b = b + NB;

    anos = anos + 1;
}

printf("\nEm %d anos o pais a passara o pais b", anos);

}
