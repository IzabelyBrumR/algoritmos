/*3. Fa�a um programa que preencha uma matriz de string com os modelos de cinco carros (exemplos de
modelos: Fusca, Gol, Vectra, etc.). Em seguida, preencha um vetor com o consumo desses carros, isto e,
quantos quil�metros cada um deles faz com um litro de combust�vel. Calcule e mostre:
(a) O modelo de carro mais econ�mico;
(b) Quantos litros de combust�vel cada um dos carros cadastrados consome para percorrer uma dist�ncia
de 1.000 quil�metros.*/

#include <stdio.h>

//Biblioteca necess�ria para utilizar a fun��o setlocale
#include <locale.h>

//Biblioteca necess�ria para utilizar as fun��es de manipula��o de string
#include <string.h>

int main() {

    //Fun��o usada para permitir a acentua��o de palavras
    setlocale(LC_ALL,"Portuguese");

    /*
        Cria um vetor chamado consumo para armazenar a quantidade de km para consumir 1 litro de gasolina por
        cada carro.
        A vari�vel economico auxilia a encontrar o carro com menor consumo de gasolina, ou seja, que anda mais
        km com 1 litro de gasolina.
        A vari�vel consumo ser� utilizada no c�lculo do consumo em 1000 km
    */
    float consumos[5], economico = -100, consumo;

    //Declara o "vetor de String"
    char carros[5][10];

    //Esta vari�vel permitir� armazenar a posi��o do carro com menor consumo.
    int posicaoMenor;

    //Este for � utilizado para solicitar as informa��es dos carros
    for (int i = 0; i < 5; i++) {

        fflush(stdin);
        printf("Digite um modelo do carro %d: ",i);
        fgets(carros[i],10,stdin);

        //scanf("\n%s",&carros[i]);
        //fgets(nome_variavel,tamanho,stdin);

        printf("Digite o consumo do carro %d: ",i);
        scanf("%f",&consumos[i]);

    }

    //Este for � utilizado para buscar o carro mais econ�mico
    for (int i = 0; i < 5; i++) {

        //float maior = -100 OU menor = 80000;
        //if(consumos[i] > maior) {
        //if (consumos[i] < menor) {

        //Testa se o consumo � maior o economico, que armazena o consumo do carro mais economico encontrado
        //at� o momento no vetor
        if(consumos[i] > economico) {
            economico = consumos[i];
            posicaoMenor = i;
        }

    }

    //Informa o modelo e a posi��o do carro mais econ�mico
    printf("O carro com menor consumo � %d que � do modelo %s\n", posicaoMenor, carros[posicaoMenor]);

    //Calcula o consumo de cada carro em 1000 km
    for (int i = 0; i < 5; i++) {

        consumo = 1000/consumos[i];
        printf("O consumo do carro %d do modelo %s em 1000 km � de %.2f litros\n",i,carros[i],consumo);

    }

}
