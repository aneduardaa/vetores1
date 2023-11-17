#include<stdio.h>

main(){
    int a[6] = {1, 0, 5, -2, -5, 7}, soma = 0;

    fflush(stdin);
    soma = a[0]+a[1]+a[7];
    printf("soma:%d", soma);

    a[4] = 100;

    for(int i = 0; i < 6; i++){
        printf("\n%d", a[i]);
    }

    printf("\nSoma:%d ", soma);
}