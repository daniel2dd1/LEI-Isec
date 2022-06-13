#include <stdio.h>
#define N 4

int insere_num(float a[], int n_elem, int tam, float num);

void main(void)
{
    int numero_elem = 0, i, cont;
    float valor, tabela[N];
    for(cont = 0; cont < 6; cont++)
    {
        printf("Valor a inserir: \n");
        scanf("%f", &valor);
        numero_elem = insere_num(tabela, numero_elem, N, valor);
        for(i = 0; i < numero_elem; i++)
        {
            printf("%.2f\t", tabela[i]);
        }
        printf(" -> %d elementos\n", numero_elem);
    }
}

int insere_num(float a[], int n_elem, int tam, float num)
{
    int i;
    if(n_elem<4){
        if(n_elem=0){
            a[n_elem]=num;
            n_elem++;
        }else{
            for(i=0;i<n_elem;i++){
                if(a[i]>=num)
                {
                    for(int x=n_elem; x>i; x--){
                        a[x]=a[x-1];
                    }
                    a[i] = num;
					n_elem++;
					return n_elem;
                }else {
					if(i == n_elem - 1){
						a[i+1] = num;
					}
				}
			}
			n_elem++;
            }
        }
    }
}
