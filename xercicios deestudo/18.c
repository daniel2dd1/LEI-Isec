#include <stdio.h>
#include <string.h>

void main()
{
    char frase[]="Hoje chegou o cheque do chefe para pagar os chazinhos do outro chato";
    char par[]= "ch";
    char caracter='x';

    puts(frase);
    printf("\nForam efetuadas %1.1d substituições:\n", TrocarPorCaracter(frase, par, caracter));
    puts(frase);
}

int TrocarPorCaracter(char frase[], char par[], char caracter)
{

}
