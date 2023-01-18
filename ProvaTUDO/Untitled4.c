#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

main(){

int filhos, i, pessoas = 3, totalfilhos = 0;
float salario, totalsalario = 0, salariomaior = 0, pessoasSalario150 = 0, percentSalario150 = 0;

    for (i = 0; i < pessoas; i++) {
        printf("Entre com o seu salário\n");
        scanf("%f", &salario);

        printf("Entre com a quantidade de filhos\n");
        scanf("%d", &filhos);

        totalsalario += salario;
        totalfilhos += filhos;

        if (salariomaior < salario) {
            salariomaior = salario;
        }
        if (salario <= 150) {
            pessoasSalario150++;
        }
    }

    percentSalario150 = (float)pessoasSalario150 / pessoas * 100;

printf("A media de salarios: %.2f\n", totalsalario / pessoas);
printf("A media de filhos: %d\n", totalfilhos / pessoas);
printf("O maior salario: %.2f\n", salariomaior);
printf("A percentagem de pessoas com salario inferior a 150: %.2f%%\n", percentSalario150);

    return 0;
}
