/*
    5. Faça um programa para ler uma tabela contendo os nomes dos alunos de uma turma de 5 alunos.
    O programa deve solicitar ao usuário os nomes dos alunos, sempre perguntando se ele deseja inserir mais
    um nome na lista. Uma vez lidos todos os alunos, o usuário irá indicar um nome que ele deseja verificar
    se está presente na lista, onde o programa deve procurar pelo nome (ou parte deste nome) e se encontrar
    deve exibir na tela o nome completo e o índice do vetor onde esta guardado este nome.
*/

#include <stdio.h>
//Biblioteca necessária para utilizar a função setlocale
#include <locale.h>

//Biblioteca necessária para utilizar as funções de manipulação de string
#include <string.h>

int main(){

    //Função usada para permitir a acentuação de palavras
    setlocale(LC_ALL,"Portuguese");

    //Declara o vetor de nomes que será utilizado e a variável que armazenará o nome buscado
    char nomes[5][20],nome[20];

    //Declara uma variável que controlará a quantidade de nomes já cadastrados e uma variável opcao que
    //armazenará se o usuário deseja adicionar mais um nome
    int controle = 0, opcao = 0;

    do{

        fflush(stdin);

        //Solicita e realiza a leitura do nome
        printf("Informe um nome: ");
        gets(nomes[controle]);

        //Verifica se o usuário deseja adicionar mais um nome
        printf("Se deseja adicionar mais um nome digite 1: ");
        scanf("%d",&opcao);

        //Incrementa o controle do número de nomes cadastrados
        controle++;

    //Verifica na opcao informada é igual a 1 e o limite de cadastros não foi atingido
    }while (controle < 5 && opcao == 1);

    //Solicita o nome a buscar
    fflush(stdin);
    printf("Informe um nome a ser buscado: ");
    gets(nome);

    //Percorre o vetor de nomes para buscar o nome cadastrado
    for (int i = 0; i < controle; i ++) {

        //Testa se o nome na posição i é igual ao nome buscado
        if( strcmp(nome,nomes[i]) == 0) {

            //Se for igual, informa ao usuário que o nome buscado foi encontrado
            printf("\nO nome buscado %s foi encontrado na posição %d",nome,i);

        }

    }

}
