#include <conio.h>
#include <stdio.h>
#include <math.h>

main(){

int v[10], i, j, aux;

    for(i=0; i<10; i++){

        printf("Entre com numeros inteiros naturais com no maximo 11 caracteres:\n");
        scanf("%d", &v[i]);

    }

    for(i=0; i<10; i++){
        for(j=i+1; j<10; j++){

            if(v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }

        }
    }

    for(i=0; i<10; i++){

        printf("O vetor do menos para o maior fica: %d\n", v[i]);

    }
}
