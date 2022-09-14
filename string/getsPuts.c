#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

// gets = mais de uma palavra
// scanf = apenas uma palavra
// puts (apenas string) = printf
// system = getch // Servem para dar uma pausa

main(){

    char string[85];

    printf("\n Digite uma string que tenha no maximo 85 caracteres:\n");
    gets(string);

    puts(string);
    puts("\n");
    system("Pause");

}
