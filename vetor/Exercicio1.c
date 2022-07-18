#include <conio.h>
#include <stdio.h>
#include <math.h>

main(){

int v[10], i;

    for(i=0; i<10; i++){

        printf("\nEntre com a nota do aluno:\n");
        scanf("%d", &v[i]);

    }
    for(i=0; i<10; i++){

        printf("\nAs notas: %d", v[i]);

    }
}
