#include<conio.h>
#include<stdio.h>
#include<math.h>

main(){

float massa;
int min = 0, seg = 0, hor = 0, i;

    printf("Entre com a massa em gramas\n");
    scanf("%f", &massa);

    while(massa >= 0.5){
        massa = massa / 2;
        seg = seg + 50;


        if(seg>=60){
            min++;
            seg-=60;
        }
        if(min>=60){
            hor++;
            min-=60;
        }
    }

    printf("O tempo que demora %d horas, %d minutos, %d segundos ", hor, min, seg);



}


