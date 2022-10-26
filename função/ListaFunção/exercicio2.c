#include <stdio.h>
#include <conio.h>

int soma(int x, int y){

    return(x + y);

}

int diferenca(int x, int y){

    return(x - y);

}

int multiplicacao(int x, int y){

    return(x * y);

}

int divisao(int x, int y){

    return(x / y);

}

int exponencial(int x, int y){

    return(pow(x, y));

}

int media(int x, int y){

    return((x + y) / 2);

}

void main(){
    int x, y;

    printf("Entre com o primeiro valor:\n");
    scanf("%d", &x);

    printf("Entre com o segundo valor:\n");
    scanf("%d", &y);

    printf("O resultado da soma: %d\n", soma(x,y));
    printf("O resultado da subtracao: %d\n", diferenca(x,y));
    printf("O resultado da multiplicacao: %d\n", multiplicacao(x,y));
    printf("O resultado da divisao: %d\n", divisao(x,y));
    printf("O resultado da exponenciacao: %d\n", exponencial(x,y));
    printf("O resultado da media: %d\n", media(x,y));
}
