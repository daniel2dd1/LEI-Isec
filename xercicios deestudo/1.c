#include <stdio.h>
int main (void)
{
    float vetor[5] = {0};
    float total = 0;
    float media = 0;
    printf("Insira 5 valores: \n");
    for(int i=0; i<5; i++)
        scanf("%f", &vetor[i]);
    for(int i=0; i<5; i++)
        total+=vetor[i];
    media=total/5;
    printf("O valor da media e : %f\n", media);
    return 0;
}
