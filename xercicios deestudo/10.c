#include <stdio.h>

void main()
{
    int n, i;
    printf("Insira o tamanho do vetor1: ");
    scanf("%d", &n);
    printf("\nInsira o tamanho do vetor2: ");
    scanf("%d", &n);
    int vetor1[n], vetor2[i];
    for(int j=0; j<i && j<n;j++){
            printf("\nInsira o valor do vetor1 da posicao %d\n", j);
            scanf("%d", &vetor1[j]);
    }
    for(int j=0; j<i && j<n;j++){
            printf("\nInsira o valor do vetor2 da posicao: %d\n", j);
            scanf("%d", &vetor2[j]);
    }
    for(int j=0; j<i && j<n;j++){
        if (vetor1[j]=vetor2[j]){
            printf("\nOs vetores são iguais.");
        }else{
            printf("\nOs vetores são diferentes.");
        }
    }
}
