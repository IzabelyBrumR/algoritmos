#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

float n;
float x = 0;

while (n != 0){
    printf("Insira um numero: \n");
    scanf("%f", &n);

    if(n > x){
        x = n;
    }

}

printf("O maior numero e: %f", x);
}
