#include <stdio.h>
#define N 5
#define P 10

int determina_aprovados(float notas[], int pres[], int n_alunos, int min_pres, float aprovados[])
{
    int n_aprovados=0;
    printf("Lista de aprovados:\n");
    for(int i=0;i<n_alunos;i++)
    {
        if(notas[i]>=9.5 && pres[i]>=min_pres)
        {
            aprovados[n_aprovados]=notas[i];
            printf("Aluno %d: --> %f", i+1, notas[i]);
            n_aprovados++;
        }
    }
    return n_aprovados;
}

void main(){
    int prese[N], i, presen;
    float nota[N], notas, nota_aprov[N];
    printf("Insira as notas e prensencas dos %d Alunos", N);
    for(i=0; i<N;i++)
    {
        do{
            printf("\nAluno %d: ", i+1);
            scanf("%f %d", &notas, &presen);
            if(notas<0 || notas>20)
                printf("\nFora do intervalo [0,20]!");
            if(presen<0)
                printf("\nNumero de presencas invalido");
        }while(notas<0 || notas>20 || presen<0);
        nota[i]=notas;
        prese[i]=presen;
    }
    int totalaprov=determina_aprovados(nota, prese, N, P, nota_aprov);
    float soma=0, media, melhor=0;
    for(i=0; i<totalaprov; i++)
    {
        soma+=nota_aprov[i];
        if(melhor<nota_aprov[i])
            melhor=nota_aprov[i];
    }
    media=soma/totalaprov;
    printf("\nMelhor nota: %f", melhor);
    printf("\nMedia das notas dos alunos aprovados: %f", media);
}
