#include <stdio.h>
void main(){
    int vetor[10];
    printf("Insira 10 valores inteiros:\n");
    for(int i= 0; i<10; i++)
        scanf("%d", &vetor[i]);
    void ordemCrescente(int vetor[], int n);
    ordemCrescente(vetor, 10);
    for(int i=0; i<10; i++)
        printf("%d ", vetor[i]);
}
void ordemCrescente(int vetor[], int n){
    int i, j, temporaria;
    for(i = 0; i<n;i++){
        for(j=i+1; j<n;j++){
            if(vetor[i]>vetor[j]){
                temporaria=vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=temporaria;
            }
        }
    }
}
