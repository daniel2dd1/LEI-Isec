#include <stdio.h>
#define N 5
#define P 10

int determina_aprovados(float notas[], int pres[], int n_alunos, int min_pres, float aprovados[]){
    n_aprovados=0;
    for(int i=0;i<n_alunos;i++)
    {
        if(notas[i]>=9.5 && pres[i]>=min_pres)
        {
            aprovados[n_aprovados]=notas[i];
            printf("\nAluno %d --> %f", i+1, notas[i]);
            n_aprovados++;
        }
    }
    printf("\nTotal de aprovados %d: ", n_aprovados);
    return n_aprovados;
}

void main(){
    int vpres[N], pres;
    float vnotas[N], vaprovados[N], notas;
    printf("Insira as notas e presencas dos %d Alunos:\n", N);
    for(int i=0; i<N;i++)
    {
        do{
        printf("\nAluno %d: ", i+1);
        scanf("%f %d", &notas, &pres);
        }while(notas<0 || notas>20 || pres<0);
        vnotas[i]=notas;
        vpres[i]=pres;
    }
    int n_aprov=determina_aprovados(vnotas, vpres, N, P, vaprovados);
    float media=0, soma=0, melhor=0;
    for(int i=0;i<n_aprov;i++)
    {
        soma+=vaprovados[i];
        if(melhor<vaprovados[i])
            melhor=vaprovados[i];
    }
    media=soma/n_aprov;
    printf("\nMelhor nota: %f", melhor);
    printf("\nMedia das notas dos alunos aprovados: %f", media);

}
