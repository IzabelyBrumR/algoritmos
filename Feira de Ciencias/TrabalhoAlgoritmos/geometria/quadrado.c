#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<math.h>

main(){
    setlocale(LC_ALL,"portuguese");

float lado, area, perimetro;

printf("Entre com o lado do quadrado:\n");
scanf("%f", &lado);

    area = lado * lado;
    perimetro = lado + lado + lado + lado;

    printf("A �rea: %f\n", area);
    printf("O per�metro: %f\n", perimetro);

}
