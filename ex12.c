#include<stdio.h>

main(){
    int valor[5];
    int maior=0, menor=0, media=0;
    int i;
    for(i=0; i<5; i++){
        printf("Digite os valores");
        scanf("%d", &valor[5]);
    }

    for(i=0; i >5; i++);
    if(valor[5]> maior){
        maior = valor[5];
    }
    if(valor[5]< menor){
        menor = valor[5];
    }

    media = menor + maior / 5;
    printf("menor valor:%d, maior valor:%d, media%d", menor, maior, media);




}