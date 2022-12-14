#include <stdio.h>
#include <conio.h>

main(){

int nums[5], target, i, j, a;

    for(a=0; a<5; a++){
        printf("Entre com os numeros do vetor:\n");
        scanf("%d", &nums[a]);
    }
        printf("Entre com o numero alvo\n");
        scanf("%d", &target);

    for(i=0; i<5; i++){
        for(j=0; j<i+1; j++){

            if(nums[i] + nums[j] == target){
                printf("%d e %d \n", i, j);
                break;
            }

        }

    }
}
