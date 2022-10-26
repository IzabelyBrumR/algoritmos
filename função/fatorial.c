#include <stdio.h>
#include <conio.h>

int calculaFatorial(int x); //protótipo

void main(){

     int num, Fatorial;

     printf("Digite o numero para ver o fatorial:\n");
     scanf("%d", &num);

     Fatorial = calculaFatorial(num);

     printf("Fatorial: %d", Fatorial);
     getch();// getch == return;

}
int calculaFatorial(int x){
        int fat, cont;

        fat = 1;
        for(cont=1; cont<=x; cont++)

            fat = fat * cont;

            return(fat);

   }
