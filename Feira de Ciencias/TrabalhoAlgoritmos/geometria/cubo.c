#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<math.h>

main(){
    setlocale(LC_ALL,"portuguese");

float aresta, area, perimetro, volume;

printf("Entre com a aresta do cubo:\n");
scanf("%f", &aresta);

    area = pow(aresta, 2) * 6;
    perimetro = aresta * 12;
    volume = pow(aresta, 3);

    printf("A área: %f\n", area);
    printf("O perímetro: %f\n", perimetro);
    printf("O volume: %f\n", volume);

}
