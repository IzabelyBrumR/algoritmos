#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<math.h>

main(){
    setlocale(LC_ALL,"portuguese");

float base, area, perimetro, l2, l3, h;


printf("Entre com a base do triângulo:\n");
scanf("%f", &base);
printf("Entre com o lado 2 do triângulo:\n");
scanf("%f", &l2);
printf("Entre com o lado 3 do triângulo:\n");
scanf("%f", &l3);
printf("Entre com a altura:\n");
scanf("%f", &h);

    if(base == l2 && l2 == l3){

        area = (pow(l2, 2) * sqrt(3)) / 4;

    }else{
        area = (base * h) / 2;
}

    perimetro = base + l2 + l3;


    printf("A área: %f\n", area);
    printf("O perímetro: %f\n", perimetro);

}
