#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

main(){

int I, i, cont;
char c, str[20];

    printf("Entre com uma string\n");
    gets(str);

    printf("Entre com um caractere\n");
    scanf("\n%c", &c);
    fflush(stdin);

    printf("Entre com uma posicao\n");
    scanf("%d", &I);

    for(i= I; i<20; i++){
        if(str[i] == c){

            printf("A letra %c foi encontrada na posicao %d", c, i+1);
            
        break;
        }
    }

}
