#include <stdio.h>

void func(char vc[], int vi[], int n)
{
    int i,j, m, pos;
    for(i=0; i<n; i++)
    {
        i=pos;
        vi[i]=j;
        for(m=0; m<j+1; m++){
            printf("%c", vc[pos]);
            break;
        }
    }
}

void main()
{
    int i, dim;
    //printf("Insira o valor da dimensao dos dois vetores: ");
    //scanf("%d", &dim);
    char vetorc[3]={"c,d,q"};
    int vetori[3]={1,2,3};
   // for(i=0; i<dim; i++)
    //{
       // printf("\nInsira o valor do caracter de posicao %d: ", i);
        //scanf("%c", &vetorc[i]);
    //}

    func(vetorc, vetori, 3);
}

