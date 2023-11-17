#include<stdio.h>

main() {
    int vetor[5];
    int posicaoMaior = 0;
    int posicaoMenor = 0;
    
    printf("Insira 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("valor%d: ", i + 1);
        scanf("%d", &vetor[i]);
    }


    for (int i = 1; i < 5; i++) {
        if (vetor[i] > vetor[posicaoMaior]) {
            posicaoMaior = i;
        }
        if (vetor[i] < vetor[posicaoMenor]) {
            posicaoMenor = i;
        }
    }

    printf("Posição do maior valor: %d\n", posicaoMaior + 1);
    printf("Posição do menor valor: %d\n", posicaoMenor + 1); 

}

