#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main(){

char str;

int i, valor_t = 0, valor_total = 0, quantidade;

        printf("Entre com H caso tenha comprado um hamburguer:\n");
        printf("Entre com C caso tenha comprado um cheeseburguer:\n");
        printf("Entre com M caso tenha comprado um misto-quente:\n");
        printf("Entre com A caso tenha comprado um americano:\n");
        printf("Entre com Q caso tenha comprado um queijo-prato:\n");

    do{

        printf("Entre com o codigo do produto comprado (para o programa parar digite X):\n");
        scanf("\n%c", &str);

        printf("Entre com a quantidade comprada deste produto:\n");
        scanf("\n%c", &quantidade);

        if(str != 'X'){

                if(str != 'X' && str == 'H')
            {
                valor_t = quantidade * 5;
                valor_total += valor_t;
            }

            if(str != 'X' && str == 'C')
            {
                valor_t = quantidade * 6;
                valor_total += valor_t;
            }

            if(str != 'X' && str == 'M')
            {
                valor_t = quantidade * 4;
                valor_total += valor_t;
            }

            if(str != 'X' && str == 'A')
            {
                valor_t = quantidade * 8;
                valor_total += valor_t;
            }

            if(str != 'X' && str == 'Q')
            {
                valor_t = quantidade * 7;
                valor_total += valor_t;
            }
        }


    }while(str != 'X');

printf("O valor a ser pago no total eh: %d", valor_total);
}
