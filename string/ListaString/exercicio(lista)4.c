#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main(){

char str;
int cont = 0, cont2 = 0, cont3 = 0;

    do{

        printf("Entre com a letra:\n");
        scanf("%c", &str);
        fflush(stdin);

        if(str == 'a' || str == 'A' || str == 'e'
               || str == 'E' || str == 'i' || str == 'I'
               || str == 'o' || str == 'O' || str == 'u'
               || str == 'U'){
            cont++;
        } else if(str != 'Z' && str != 'z'){
            cont2++;
        }
        cont3++;

    } while(str != 'z' && str != 'Z' && cont3 < 10);

    printf("O numero de vogais: %d\n", cont);
    printf("O numero de consoantes: %d", cont2);
}
