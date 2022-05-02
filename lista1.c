#include <stdio.h>
#include <conio.h>
#include <math.h>

int exercicio_dois(int n){

    int quadrado = n * n;
    int cubo = pow(n,3);

    printf("%d \n", quadrado);
    printf("%d", cubo);

    return 1;

}

int exercicio_tres(int ano){

    int ano_atual = 2022;

    int idade = ano_atual - ano;

    printf("sua idade � %d", idade);

    return 1;


}

int exercicio_quatro(int c){

    float f = c * 1.8 + 32;

    printf("%f", f);

    return 1;

 }

int exercicio_cinco(int a, int b, int c){

    int media = (a * 2 + b * 3 + c * 5)/10;

    printf("%d", media);

    return 1;


 }

 int exercicio_seis_a(int a, int b){

    int x = a - b;

    printf("%d", x * x);

    return 1;


 }

 int exercicio_seis_b(int a, int b, int c, int n){

    int x = pow(a-b, 2);

    int z = pow(c-n, 2);

    printf("%d", x - z);

    return 1;


 }

 int exercicio_seis_c(int a, int b, int c){

    int z = (b*b) -4 * a * c;

    printf("%d", z);

    return 1;

 }

 void exercicio_seis_d(int a){

    int z = pow(a, 1/3.);

    printf("%d", z);


 }

void exercicio_seis_e(int a, int b,int c){

    int baskara = exercicio_seis_c(a, b, c);

    int raiz = pow(baskara, 1/2.);

    printf("%d", raiz);

 }

 int exercicio_seis_f(int c){

    printf("%d", c * c);

    return 1;

 }

 void exercicio_seis_g(int a){

    int z = ((a * a) * sqrt(3))/4;

    printf("%d", z);


 }

 void exercicio_seis_h(int a, int b, int c, int d, int n){

    int r = a - b * (c + n * n)/d;

    printf("%d", r);


 }

 void exercicio_seis_i(int a, int b, int c){

    int x = a * pow(b,c);

    printf("%d", x);


 }
void main(){


    exercicio_seis_i(3, 4, 2);


    return 1;
