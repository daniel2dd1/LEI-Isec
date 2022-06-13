#include <stdio.h>
#define TAM 10

void main()
{
    int i;
    int vetor[TAM];

    for(i=0;i<10;i++){
        printf("Insira o valor da posicao %d:\n", i);
        scanf("%d", &vetor[i]);
        if(vetor[i]>=0 && vetor[i]<=9){
            vetor[i]=1;
        }else{
            vetor[i]=0;
        }
    }
    for(i=0;i<10;i++)
        printf("\n%d", vetor[i]);
}
