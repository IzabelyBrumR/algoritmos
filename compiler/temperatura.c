#include<stdio.h>

main() {

 float grausc, grausf;

 printf("Entre com a temperatura em graus celsius:\n");
 scanf("%f", &grausc);

 grausf=grausc* 1.8+32;

 printf("A temperatura em graus celsius: %f", grausc);
 printf("\nA temperatura em graus fahrenheit:%f", grausf);

}
