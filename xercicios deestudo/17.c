#include <stdio.h>
#define N 5
#define P 10

int determina_aprovados(float notas[], int pres[], int n_alunos, int min_pres, float aprovados[])
{
    int n_aprovados=0;

    printf("Tabela de alunos aprovados:\n");
    for(int i=0;i<n_alunos;i++)
    {
        if(notas[i]>=9.5 && pres[i]>=min_pres)
        {
            aprovados[n_aprovados]=notas[i];
            printf("Aluno %d: %f\n", i+1, aprovados[n_aprovados]);
            n_aprovados++;
        }
    }
    printf("Total de alunos aprovados: %d",n_aprovados);
    return n_aprovados;
}

void main()
{
    int vpres[N], pres;
    float notas, vnotas[N], vaprovados[N];
    printf("Insira notas e presencas dos %d alunos\n", N);
    for(int i=0; i<N; i++)
    {
        do{
            printf("Insira as notas e as presencas do aluno %d: ", i+1);//fazer isto enquanto
            scanf("%f %d", &notas, &pres);
            if(notas<0 || notas>20)
                printf("Nota fora do intervalo[0,20]!\n");
            if(pres<0)
                printf("Valor das presencas invalidas!\n");
        }while(notas<0 || notas>20 || pres<0); //percorrer o ciclo enquanto estas condicoes forem invalidas
        vnotas[i]=notas;
        vpres[i]=pres;
    }
    int aprov=determina_aprovados(vnotas,vpres,N,P,vaprovados);
    float melhor=0, soma=0, media;
    for(int k=0;k<aprov;k++)
    {
        printf("Nota %d = %f\n",k,vaprovados[k]);
        soma+=vaprovados[k];
        if(vaprovados[k]>melhor)
            melhor=vaprovados[k];
    }
    media=soma/aprov;
    printf("Melhor nota: %f\n", melhor);
    printf("Media: %f\n", media);
    printf("Total de aprovados: %d", aprov);

}
