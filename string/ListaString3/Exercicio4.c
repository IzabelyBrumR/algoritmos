/*
    4. Fa�a um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa palavra.
    Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere.
*/

#include <stdio.h>
//Biblioteca necess�ria para utilizar a fun��o setlocale
#include <locale.h>

//Biblioteca necess�ria para utilizar as fun��es de manipula��o de string
#include <string.h>

//Biblioteca necess�ria para utilizar a fun��o toupper
#include <ctype.h>

int main() {

    //Fun��o usada para permitir a acentua��o de palavras
    setlocale(LC_ALL,"Portuguese");

    //Declara��o de uma String e da vari�vel que armazena a letra que deseja-se substituir
    char palavra[20], letra;

    //Declara��o do contador de vogais
    int contadorVogais = 0;

    //Solicita ao usu�rio e realiza a leitura da String
    printf("Informe uma palavra: ");
    gets(palavra);

    //Percorre a String
    for (int i = 0; i < strlen(palavra); i ++) {

        //Testa se a letra na posi��o i da String � uma vogal
        //Usa-se a fun��o toupper() para transformar a letra em mai�scula para facilitar o teste
        if (toupper(palavra[i]) == 'A' || toupper(palavra[i]) == 'E' || toupper(palavra[i]) == 'I'
            || toupper(palavra[i]) == 'O' || toupper(palavra[i]) == 'U') {

            //Incrementa o contador de vogais
            contadorVogais++;

        }

    }

    //Imprime o n�mero de vogais encontradas
    printf("\nForam encontradas %d vogais na String.\n",contadorVogais);

    //Solicita e realiza a leitura de um caracter para substituir todas as vogais
    printf("Informe um letra para substituir as vogais: ");
    scanf("%c",&letra);

    //Assim como o primeiro for, este for percorre toda a String
    for (int i = 0; i < strlen(palavra); i ++) {

        //Verifica se a letra na possui i � uma vogal
        if (toupper(palavra[i]) == 'A' || toupper(palavra[i]) == 'E' || toupper(palavra[i]) == 'I'
            || toupper(palavra[i]) == 'O' || toupper(palavra[i]) == 'U') {

            //Se for uma vogal � realizado a troca pela letra informada pelo usu�rio
            palavra[i] = letra;

        }

    }

    //Imprime a palavra ap�s a troca das vogais
    puts(palavra);

}
