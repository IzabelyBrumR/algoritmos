#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

int v[5], i, cont=0, cont2=0, cont3=0;

for(i=0; i<5; i++){

    printf("Entre com um valor:\n");
    scanf("%d", &v[i]);
}

for(i=0; i<5; i++){

    if(v[i]<v[0])
    {
        cont++;
    }
    if(v[i]>v[0])
    {
        cont2++;
    }
    if(v[i]==v[1])
    {
        cont3++;
    }
}

printf("A quantidade de numeros maiores que o primeiro valor: %d\n", cont);
printf("A quantidade de numeros menor que o primeiro valor: %d\n", cont2);
printf("A quantidade de numeros com o mesmo valor do primeiro: %d\n", cont3);
}
