
#include<stdio.h>

main() {
    int vetor[10];
    int quantidadeNegativos = 0;
    float somaPositivos = 0;

    printf("Insira 10 números reais:\n");
    for (int i = 0; i < 10; i++) {
        printf("valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            quantidadeNegativos++;
        } else {
            somaPositivos += vetor[i];
        }
    }
    printf("Quantidade de números negativos: %d\n", quantidadeNegativos);
    printf("Soma dos números positivos: %.2f\n", somaPositivos);
}



