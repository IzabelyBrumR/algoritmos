#include <stdio.h>
#include <conio.h>

int verifica_quadrante(int x, int y){

    if(x>0 && y>0){
        printf("Estes numeros pertencem ao quadrante 1\n");
    }
    if(x<0 && y>0){
        printf("Estes numeros pertencem ao quadrante 2\n");
    }
    if(x<0 && y<0){
        printf("Estes numeros pertencem ao quadrante 3\n");
    }
    if(x>0 && y<0){
        printf("Estes numeros pertencem ao quadrante 4\n");
    }
    return(x, y);
}

void main(){
    int x, y;

    printf("Entre com o primeiro valor:\n");
    scanf("%d", &x);

    printf("Entre com o segundo valor:\n");
    scanf("%d", &y);

    verifica_quadrante(x, y);

}
