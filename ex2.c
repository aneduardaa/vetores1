#include<stdio.h>

main(){
    int valor[6];

    int i;

    for(i=0; i < 6; i++){
    printf("Digite os valores\n");
    scanf("%d", &valor[i]);
    }

    for(int i = 0; i < 6; i++){
       printf("\nInteiros[%d] = %d", i, valor[i]); 
    }
}