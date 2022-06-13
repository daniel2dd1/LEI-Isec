#include <stdio.h>

int somamaiorvalor(int array[], int dim)
{
        int somamaior=array[0], maiorval=array[0];
        for(int i=1;i<dim;i++){
            if(array[i]>maiorval){
                maiorval=array[i];
                somamaior=array[i];
            }
            else if(array[i]==maiorval)
                somamaior+=maiorval;
        }
        return somamaior;
}
void main(){
    int n;
    printf("Defina o tamanho do seu vetor:\n");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0;i<n;i++){
        printf("\nInsira o valor da pos %d: \n", i);
        scanf("%d", &vetor[i]);
    }
    int cont=somamaiorvalor(vetor, n);
    printf("\nA soma do maior algarismo do array e: %d",cont);
}

