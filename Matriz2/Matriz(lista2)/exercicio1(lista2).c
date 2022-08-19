#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

int i, j, maior = 0, maior1 = 0, maior2 = 0, maior3 = 0, maior4 = 0;
float m[3][5];

for(i=0; i<3; i++){
    for(j=0; j<5; j++)
    {
        printf("Entre com as alturas dos atletas:\n");
        scanf("%f", &m[i][j]);
    }
}


for(i=0; i<1; i++){
    for(j=0; j<5; j++)
    {
        if(m[i][j] > maior)
        {
            maior = m[i][j];
        }
    }
}

for(i=0; i<2; i++){
    for(j=0; j<5; j++)
    {
        if(m[i][j] > maior1)
        {
            maior1 = m[i][j];
        }
    }
}

for(i=0; i<3; i++){
    for(j=0; j<5; j++)
    {
        if(m[i][j] > maior2)
        {
            maior2 = m[i][j];
        }
    }
}

printf("O atleta com a maior altura na delegacao 1: %d\n", maior);
printf("O atleta com a maior altura na delegacao 2: %d\n", maior1);
printf("O atleta com a maior altura na delegacao 3: %d\n", maior2);
}
