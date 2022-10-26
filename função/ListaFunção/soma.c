#include <stdio.h>
#include <conio.h>

int soma(int x, int y){

    return (x + y);

}

void main(){
    int x; int y; int saida;

    printf("Entre com o primeiro valor:\n");
    scanf("%d", &x);

    printf("Entre com o segundo valor:\n");
    scanf("%d", &y);

    printf("O resultado da soma: %d", soma(x,y));

    return(0);
}
