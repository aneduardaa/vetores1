#include<stdio.h>

main(){
    int valor[10], maior, pMaior;
    int i;
    for(i=0; i < 10; i++){
        printf("\nDigite os valores");
        scanf("%d", valor[i]);

        maior = valor[0];

        if(valor[i]>maior){
            maior = valor[i];
            pMaior = i;
        }
    }

    printf("Valor:%d\n maior elemento:%d\n e a posicao:%d\n", valor, maior, pMaior);



}