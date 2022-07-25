#include<stdio.h>

main(){
    int i, cont;

    for(i=10; i<150; i++){

        if(i%5==0){

            cont++;

        }
    }

    printf("Quantidades de numeros multiplos de 5 entre 10 e 150: %d\n", cont);
}
