#include<stdio.h>

main(){
    int valor[5], numPares = 0;

    int i;
    for(i = 0; i < 10; i++){
        printf("digite os valores\n");
        scanf("%d", &valor[i]);

        if(valor[i] % 2 == 0){
            printf("Numero par\n");
            numPares++;
        }else{
            printf("Numero impar\n");
        }
        printf("Quantidade de numeros pares%d\n", numPares);
        
    }

}