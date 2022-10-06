#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

int opcao;

    while(1 == 1){

        printf("\nDigite 01 para balancear a equação: P2O5 + H2OH = H3PO4\n");
        printf("Digite 02 para balancear a equação: Mg + HCl = MgCl2 + H2\n");
        printf("Digite 03 para balancear a equação: Al2O3 + HCl = AlCl3 + H2O\n");
        printf("Digite 04 para balancear a equação: Fe + Cl2 = FeCl3\n");
        printf("Digite 05 para balancear a equação: CaCO3 + HCl = CaCl2 + H2O + CO2\n");
        printf("Digite 06 para sair\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 01:
                printf("\nA P2O5 + B H2OH = C H3PO4\n");
                system("color b");
                printf("\nP\t\tH\t\tO\n");
                printf("\n2a = c\t\t2b = 3c\t\t5a + b = 4c\n");
                printf("\n\t\ta = 1\n");
                printf("\n2 x 1 = c\tc = 2\n");
                printf("\n2b = 3c\t\t2b = 3 x 2\t2b = 6\t\tb = 6 / 2\tb = 3\n");
                printf("\nA = 1\t\tB = 3\t\tC = 2\n");
                printf("\nResposta final: P2O5 + 3 H2OH = 2 H3PO4\n");
                break;

            case 02:
                printf("\nA Mg + B HCl = C MgCl2 + D H2\n");
                system("color e");
                printf("\nMg\t\tCl\t\tH\n");
                printf("\n2a = c\t\t2b = 3c\t\t5a + b = 4c\n");
                printf("\n\t\ta = 1\n");
                printf("\na = c\t\tc = 1\n");
                printf("\nb = 2c\t\tb = 2 x 1\tb = 2\n");
                printf("\nA = 1\t\tB = 2\t\tC = 1\t\tD = 1\n");
                printf("\nResposta final: Mg + 2 HCl = MgCl2 + H2\n");
                break;

            case 03:
                printf("\nA Al2O3 + B HCl = C AlCl3 + D H2O\n");
                system("color a");
                printf("\nAl\t\tCl\t\tH\t\tO\n");
                printf("\n2a = c\t\t3a = d\t\tb = 2d\t\tb = 3c\n");
                printf("\n\t\ta = 1\n");
                printf("\n2a = c\t\t2 x 1 = c\t\tc = 2\n");
                printf("\nb = 3c\t\tb = 3 x 2\t\tb = 6\n");
                printf("\nb = 2d\t\t6 = 2d\t\t\td = 6 / 2\t\td = 3\n");
                printf("\nA = 1\tB = 6\tC = 2\tD = 3\n");
                printf("\nResposta final: Al2O3 + 6 HCl = 2 AlCl3 + 3 H2O\n");
                break;

            case 04:
                printf("\nA Fe + B Cl2 = C FeCl3\n");
                system("color d");
                printf("\nFe\t\tCl\n");
                printf("\na = c\t\t2b = 3c\n");
                printf("\n\t\ta = 1\n");
                printf("\na = c\t\tc = 1\n");
                printf("\n2b = 3c\t\t2b = 3 x 1\t\tb = 3 / 2\t\tb = 1,5\n");
                printf("\n1 Fe + 1,5 Cl2 = 1 FeCl3 x 2\t\t 2 Fe + 3 Cl2 = 2 FeCl3\n");
                printf("\nA = 2\tB = 3\tC = 2\n");
                printf("\nResposta final: 2 Fe + 3 Cl2 = 2 FeCl3\n");
                break;

            case 05:
                printf("\nA CaCO3 + B HCl = C CaCl2 + D H2O + E CO2\n");
                system("color f");
                printf("\nCa\t\tCl\t\tC\t\tH\t\tO\n");
                printf("\na = c\t\tb = 2c\t\ta = e\t\tb = 2d\t\t3a = 2e + d\n");
                printf("\n\t\ta = 1\n");
                printf("\na = c\t\t1 = c\n\nb = 2c\t\tb = 2\n\na = e\t1 = e\n\nb = 2d\t2 = 2d\t d = 1\n");
                printf("\nA = 1\t B = 2\tC = 1\tD = 1\tE = 1\n");
                printf("\nResposta final: CaCO3 + 2HCl = CaCl2 + H2O + CO2\n");
                break;

            case 06:
                return -1;
        }
    }



}
