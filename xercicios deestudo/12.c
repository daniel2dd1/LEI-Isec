#include <stdio.h>

int posmaior(int v[], int dim)
{
  int i, valori=v[0], posi;
  for(i=1;i<dim;i++)
    if(v[i]>valori){
        valori=v[i];
        posi=i;
    }
   return posi;
}

int desloca(int vd[], int dim)
{
    int i;
    for(i=dim-1; i>0;i--)  //i= ao ultimo membro enquanto i maior q 0 vai decrementado do ultimo
    {
        vd[i]=vd[i-1];//ultimo membro = ao penultimo

    }
    vd[0]=vd[dim-1];
}

void main(){
    int n, direita;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0;i<n;i++){
        printf("\nInsira o valor na pos %d: ", i);
        scanf("%d", &vetor[i]);
    }
    int maiorval=posmaior(vetor, n);
    printf("Maior valor surge na pos: %d", maiorval);
    while(vetor[n-1]!= vetor[maiorval]){
        desloca(vetor,n);
        printf("\nVetor:");
        for(int i=0;i<n;i++)
            printf(" %d",vetor[i]);
            break;
    }
}
