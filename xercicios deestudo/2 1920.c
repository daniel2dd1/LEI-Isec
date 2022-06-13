#include <stdio.h>
#include <stdbool.h>

int PontoNoRetangulo(float vInfEsq[], float vSupDir[], float ponto[]);

void main()
{
    float infesq[2]= {2.0,1.5}, supdir[2]= {4.0,2.5}, paredeinf[2]= {0.0,0.0}, paredesup[2]= {6.0,3.0};
    char resposta;
    int numpart=0, inscricao=0;
    int maior_pontuacao=0;
    int id=0;

    do
    {
        printf("Inserir Participante (S/N)?\n");
        resposta=getchar();
        char estudante;

        do
        {
            printf("Estudante(S/N):");
            estudante=getchar();
        }
        while((estudante!='S'&& estudante!='s') && (estudante!='N'&& estudante!='n'));
        if(estudante=='s' || estudante=='S')
        {
            inscricao+=5;

        }
        else
        {
            inscricao+=10;
        }
        printf("\nPartcipante %d: ", numpart);
        numpart++;
        int pontos;


        for(int i=1; i<15; i++)
        {
            float coordenadas[2];
            bool validaCoordenada;
            do
				{
                    printf("Coordenadas do lancamento %d: ", i);
                    scanf("%f %f",&coordenadas[0],&coordenadas[1]);
					validaCoordenada=PontoNoRetangulo(paredeinf,paredesup,coordenadas);
					if(validaCoordenada == 0)
						printf("Coordenadas invalidas\n");
				} while (validaCoordenada== 0);

				if(PontoNoRetangulo(infesq,supdir,coordenadas) == 1)
					pontos++;
			}
			printf("Conseguiu %d pontos!!", pontos);
			if(pontos>=maior_pontuacao)
			{
				maior_pontuacao=pontos;
				id=i;
			}
			i++;
        }
    }
    while(resposta=!'N' || resposta!='n');
    printf("Total de participantes = %d\n",i);
	printf("Valor angariado (€) = %d\n",inscricao);
	printf("N do participante vencedor = %d\n", id);
}

int PontoNoRetangulo(float vInfEsq[], float vSupDir[], float ponto[])
{
    int i;
    if(ponto[0]>=vInfEsq[0] && ponto[0]<=vSupDir[0] && ponto[1]>=vInfEsq[1] && ponto[1]<=vSupDir[1])
        return 1;
    else
        return 0;
}
