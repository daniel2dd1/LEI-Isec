#include <stdio.h>

float media_final(int valor, int valido);

void main()
{
    float valor;
    int valido;
    while(valido)
    {
        do
        {
            printf("\nValor: ");
            scanf("%f",&valor);
        }
        while(valor<0 || valor>=10);
        printf("Quer adicionar o numero para a media (0 se sim | 1 se nao) : ");
		scanf("%d", &valido);
		if(valido)
            media_final(valor,valido);
        else
            printf("A media vai ser de %.2f", media_final(valor, valido));
    }
}

float media_final(int valor, int valido)
{
    static float media = 0;
    static int cont = 0;
    if(valido==1)
    {
        media+=valor;
        cont++;
        return 0;
    }
    else
        return media/cont;
}
