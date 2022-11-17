#include <stdio.h>
#include <string.h>

int main()
{
    char nm[3][20], aux[20];
    int i,j;

    for (i=0; i<3; i++) {

        printf("\nNome %d: ", i+1);
        scanf("\n%s", &nm[i]);

    }

    for (i = 0; i < 3; i++) {

        for (j = i+1; j < 3; j++) {

            if ( strcmp(nm[i], nm[j]) > 0) {

                strcpy(aux, nm[i]);
                strcpy(nm[i], nm[j]);
                strcpy(nm[j], aux);

            }

        }

    }

    for (i=0; i<3; i++) {

        printf("%s\n", nm[i]);

    }

}
