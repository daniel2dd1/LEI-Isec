#include <stdio.h>
#define TAM 5
void main()
{
    int vetor[TAM];
    int i , soma=0;
    float media;
    for(i=0;i<5;i++)
    {
        printf("Insira o valor de posicao %d:\n", i);
        scanf("%d", &vetor[i]);
    }
    for(i=0;i<5;i++)
        soma+=vetor[i];
    media=soma/5;
    printf("\nMedia e: %f\n", media);
    for(i=0;i<5;i++)
    {
        if(vetor[i]<media)
        {
            vetor[i]=0;
        }
    }
    for(i=0;i<5;i++)
    printf("%d\n", vetor[i]);
}
