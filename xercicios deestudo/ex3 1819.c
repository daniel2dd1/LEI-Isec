#include <stdio.h>
#include <string.h>
#include <ctype.h>

int TrocarPorCarater(char frase[],char par[], char carater);

void main()
{
    char frase[] = "Hoje chegou o cheque para pagar os chazinhos do outro chato.";
    char par[] = "ch";
    char carater = 'x';

    puts(frase);
    printf("\nForam efetuadas %1.1d substituicoes.\n\n",TrocarPorCarater(frase,par,carater));
    puts(frase);
}

/*int TrocarPorCarater(char frase[], char par[], char caracter)
{
    int conta=0;
    char current, next;
    caracter = tolower(caracter);
    for(int i=0;i<strlen(frase); i++)
    {
        current = tolower(frase[i]);
        next = tolower(frase[i+1]);
        if(current==par[0] && next==par[1])
        {
            frase[i]= caracter;
            conta++;
            for(int j=i+1;j<strlen(frase);j++)
            {
                frase[j] = frase[j+1];
            }
        }
    }
    return conta;
}*/

int TrocarPorCarater(char frase[], char par[], char caracter)
{
    int conta=0;
    char current, next;
    caracter=tolower(caracter);

    for(int i=0;i<strlen(frase);i++)
    {
        current=frase[i];
        next=frase[i+1];
        if(current==par[0] && next==par[1])
        {
            conta++;
            frase[i]=caracter;
            for(int j=i+1;j<strlen(frase);j++)
                frase[j]=frase[j+1];
        }
    }
    return conta;
}

