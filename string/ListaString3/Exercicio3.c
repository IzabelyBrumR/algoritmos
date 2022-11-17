/*3. Faça um programa que preencha uma matriz de string com os modelos de cinco carros (exemplos de
modelos: Fusca, Gol, Vectra, etc.). Em seguida, preencha um vetor com o consumo desses carros, isto e,
quantos quilômetros cada um deles faz com um litro de combustível. Calcule e mostre:
(a) O modelo de carro mais econômico;
(b) Quantos litros de combustível cada um dos carros cadastrados consome para percorrer uma distância
de 1.000 quilômetros.*/

#include <stdio.h>

//Biblioteca necessária para utilizar a função setlocale
#include <locale.h>

//Biblioteca necessária para utilizar as funções de manipulação de string
#include <string.h>

int main() {

    //Função usada para permitir a acentuação de palavras
    setlocale(LC_ALL,"Portuguese");

    /*
        Cria um vetor chamado consumo para armazenar a quantidade de km para consumir 1 litro de gasolina por
        cada carro.
        A variável economico auxilia a encontrar o carro com menor consumo de gasolina, ou seja, que anda mais
        km com 1 litro de gasolina.
        A variável consumo será utilizada no cálculo do consumo em 1000 km
    */
    float consumos[5], economico = -100, consumo;

    //Declara o "vetor de String"
    char carros[5][10];

    //Esta variável permitirá armazenar a posição do carro com menor consumo.
    int posicaoMenor;

    //Este for é utilizado para solicitar as informações dos carros
    for (int i = 0; i < 5; i++) {

        fflush(stdin);
        printf("Digite um modelo do carro %d: ",i);
        fgets(carros[i],10,stdin);

        //scanf("\n%s",&carros[i]);
        //fgets(nome_variavel,tamanho,stdin);

        printf("Digite o consumo do carro %d: ",i);
        scanf("%f",&consumos[i]);

    }

    //Este for é utilizado para buscar o carro mais econômico
    for (int i = 0; i < 5; i++) {

        //float maior = -100 OU menor = 80000;
        //if(consumos[i] > maior) {
        //if (consumos[i] < menor) {

        //Testa se o consumo é maior o economico, que armazena o consumo do carro mais economico encontrado
        //até o momento no vetor
        if(consumos[i] > economico) {
            economico = consumos[i];
            posicaoMenor = i;
        }

    }

    //Informa o modelo e a posição do carro mais econômico
    printf("O carro com menor consumo é %d que é do modelo %s\n", posicaoMenor, carros[posicaoMenor]);

    //Calcula o consumo de cada carro em 1000 km
    for (int i = 0; i < 5; i++) {

        consumo = 1000/consumos[i];
        printf("O consumo do carro %d do modelo %s em 1000 km é de %.2f litros\n",i,carros[i],consumo);

    }

}
