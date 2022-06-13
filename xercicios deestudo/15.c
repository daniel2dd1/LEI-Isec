#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100
int testaChar(char frase[], int x, char c)
{
 int num=0, i=0, encontrou=0;
while(frase[i] !='\0' && encontrou==0)
{
 if(frase[i]==c)
num++;
 else
num=0;
 if (num==x)
encontrou=1;
 i++;
}
return encontrou;
}
void main()
{
 char c;
 char frase[TAM];
 char maior_frase[TAM];
 maior_frase[TAM]=" ";
int max=0, tam;
printf("Introduza uma caracter:");
c=getchar();
 fflush (stdin) ;
do
{
printf("Introduza uma string: ");
gets(frase);
tam=strlen(frase) ;
if (testaChar(frase, 3, c) && tam> max)
{
max = tam;
strcpy(maior_frase,frase);
}
}
while (stricmp(frase, "fim") !=0);
printf ("A maior string onde o caracter %c surge 3 vezes consecutivas e: %s\n", c, maior_frase);
}
