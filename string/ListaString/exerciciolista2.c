#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main(){

char str[100], letra, str2[100];
int i, j=0;
     puts("Entre com uma frase de no maximo 100 caracteres:\n");
    gets(str);

    printf("Entre com uma letra:");
    scanf("\n%c", &letra);

for(i=0; i<100; i++){
    if(str[i] != letra)
    {
        str2[j] = str[i];
        j++;
    }

}
 printf("A nova string eh:\n");
 puts(str2);
 getch();

}
