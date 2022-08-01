#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

int v[10], i, a[5], b[5];

for(i=0; i<10; i++){
    printf("Entre com valores inteiros:\n");
    scanf("%d", &v[i]);
}

for(i=0; i<10; i++){

    if(v[i]%2==0){
        printf("Este valor eh par: %d\n", v[i]);
    }

    else{
        printf("Este valor eh impar: %d\n", v[i]);
    }
}
}

