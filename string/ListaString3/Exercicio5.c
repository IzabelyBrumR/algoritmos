/*
    5. Fa�a um programa para ler uma tabela contendo os nomes dos alunos de uma turma de 5 alunos.
    O programa deve solicitar ao usu�rio os nomes dos alunos, sempre perguntando se ele deseja inserir mais
    um nome na lista. Uma vez lidos todos os alunos, o usu�rio ir� indicar um nome que ele deseja verificar
    se est� presente na lista, onde o programa deve procurar pelo nome (ou parte deste nome) e se encontrar
    deve exibir na tela o nome completo e o �ndice do vetor onde esta guardado este nome.
*/

#include <stdio.h>
//Biblioteca necess�ria para utilizar a fun��o setlocale
#include <locale.h>

//Biblioteca necess�ria para utilizar as fun��es de manipula��o de string
#include <string.h>

int main(){

    //Fun��o usada para permitir a acentua��o de palavras
    setlocale(LC_ALL,"Portuguese");

    //Declara o vetor de nomes que ser� utilizado e a vari�vel que armazenar� o nome buscado
    char nomes[5][20],nome[20];

    //Declara uma vari�vel que controlar� a quantidade de nomes j� cadastrados e uma vari�vel opcao que
    //armazenar� se o usu�rio deseja adicionar mais um nome
    int controle = 0, opcao = 0;

    do{

        fflush(stdin);

        //Solicita e realiza a leitura do nome
        printf("Informe um nome: ");
        gets(nomes[controle]);

        //Verifica se o usu�rio deseja adicionar mais um nome
        printf("Se deseja adicionar mais um nome digite 1: ");
        scanf("%d",&opcao);

        //Incrementa o controle do n�mero de nomes cadastrados
        controle++;

    //Verifica na opcao informada � igual a 1 e o limite de cadastros n�o foi atingido
    }while (controle < 5 && opcao == 1);

    //Solicita o nome a buscar
    fflush(stdin);
    printf("Informe um nome a ser buscado: ");
    gets(nome);

    //Percorre o vetor de nomes para buscar o nome cadastrado
    for (int i = 0; i < controle; i ++) {

        //Testa se o nome na posi��o i � igual ao nome buscado
        if( strcmp(nome,nomes[i]) == 0) {

            //Se for igual, informa ao usu�rio que o nome buscado foi encontrado
            printf("\nO nome buscado %s foi encontrado na posi��o %d",nome,i);

        }

    }

}
