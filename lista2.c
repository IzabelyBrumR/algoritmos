#include <stdio.h>
#include <math.h>
int exercicio_um(int x){

if(x<0){
    x = x * x;
    return x;
}

x = sqrt(x);
return x;


}

int main(){
    int numero = -9;
    numero = exercicio_um(numero);
    printf("%d", numero);

}

#EXERCICIO 03

#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

    char c;
    scanf("%c", &c);

    if(c == 'p'){

        printf("Voce e paulista");

        }

    if(c == 'r'){

        printf("Voce e carioca");

    }

    if(c == 'm'){

        printf("Voce e mineiro");

    }

    if((c != 'p') && (c != 'r') && (c != 'm')){

        printf("Outro estado");
    }
}
