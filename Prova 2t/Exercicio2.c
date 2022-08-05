#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

int v[10], v1[10], v2[10], i, cont=0, cont1=0;

for(i=0; i<10; i++){

    printf("Entre com um valor:\n");
    scanf("%d", &v[i]);

}

for(i=0; i<10; i++){

    if(v[i]%2==0)
    {
        v[i]=v2[i];
        cont++;
    }
    if(v[i]%2!=0)
    {
        v[i] = v1[i];
        cont1++;
    }

}
printf("O total de numeros pares: %d\n", cont);
printf("O total de numeros impares: %d", cont1);
}
