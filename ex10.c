#include<stdio.h>

main(){
    float notas[15];
    int soma = 0;
    int media=0;
    int i;

    for(i = 0; i<15; i++){
        printf("Insira o valor das notas");
        scanf("%f", &notas);
        soma += notas[i];
    }
    media = soma/15;

    printf("A media da soma das notas é%d", media);


}