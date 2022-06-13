#include <stdio.h>
#define DIM_TAB 10

void main()
{
    int tab[DIM_TAB]={1, 2, 4, 5, 6, 3, 2, -23, -23, -120};
    decrescente(tab,DIM_TAB);
}

decrescente(int v[], int dim)
{
    int i, posMaior = 0, maior = v[0], printed = 0,x,j = 1;
    for(i=0;i<dim;i++)
    {
        if(v[i] >= maior)
        {
            j = i;
            maior = v[i];
        }
    }
    printf("%d ", maior);

    for(i = j - 1, j++; i>=0 && j<dim;)
    {
        if(v[i] >= v[j])
            printf("%d ",v[i--]);
        else if (v[i] < v[j])
            printf("%d ",v[j++]);
    }
    if(i < 0) // Atingiu o limite ŕ esquerda
        while(j<dim)
            printf("%d ",v[j++]);
    else // Atingiu o limite ŕ direita
        while(i>=0)
            printf("%d ",v[i--]);
}
