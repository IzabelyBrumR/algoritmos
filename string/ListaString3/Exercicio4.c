/*
    4. Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa palavra.
    Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere.
*/

#include <stdio.h>
//Biblioteca necessária para utilizar a função setlocale
#include <locale.h>

//Biblioteca necessária para utilizar as funções de manipulação de string
#include <string.h>

//Biblioteca necessária para utilizar a função toupper
#include <ctype.h>

int main() {

    //Função usada para permitir a acentuação de palavras
    setlocale(LC_ALL,"Portuguese");

    //Declaração de uma String e da variável que armazena a letra que deseja-se substituir
    char palavra[20], letra;

    //Declaração do contador de vogais
    int contadorVogais = 0;

    //Solicita ao usuário e realiza a leitura da String
    printf("Informe uma palavra: ");
    gets(palavra);

    //Percorre a String
    for (int i = 0; i < strlen(palavra); i ++) {

        //Testa se a letra na posição i da String é uma vogal
        //Usa-se a função toupper() para transformar a letra em maiúscula para facilitar o teste
        if (toupper(palavra[i]) == 'A' || toupper(palavra[i]) == 'E' || toupper(palavra[i]) == 'I'
            || toupper(palavra[i]) == 'O' || toupper(palavra[i]) == 'U') {

            //Incrementa o contador de vogais
            contadorVogais++;

        }

    }

    //Imprime o número de vogais encontradas
    printf("\nForam encontradas %d vogais na String.\n",contadorVogais);

    //Solicita e realiza a leitura de um caracter para substituir todas as vogais
    printf("Informe um letra para substituir as vogais: ");
    scanf("%c",&letra);

    //Assim como o primeiro for, este for percorre toda a String
    for (int i = 0; i < strlen(palavra); i ++) {

        //Verifica se a letra na possui i é uma vogal
        if (toupper(palavra[i]) == 'A' || toupper(palavra[i]) == 'E' || toupper(palavra[i]) == 'I'
            || toupper(palavra[i]) == 'O' || toupper(palavra[i]) == 'U') {

            //Se for uma vogal é realizado a troca pela letra informada pelo usuário
            palavra[i] = letra;

        }

    }

    //Imprime a palavra após a troca das vogais
    puts(palavra);

}
