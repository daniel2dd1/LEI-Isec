#include <stdio.h>
#define TAMFRASE 50
#define TAMFIM 75
void main()
{
    char f1[TAMFRASE], f2[TAMFRASE], final[TAMFIM]="";
    printf("Indique a frase 1: ");
    gets(f1);
    printf("Indique a frase 2: ");
    gets(f2);
    if(func(f1, f2, final, TAMFIM))
        printf("Frase modificada:\n%s\n",final);
    else
        printf("Frase não modificada!\n");
}

/*int func(char st1[], char st2[], char stfim[], int tamf)
{
    int tam1, tam2, maior, cont=0, x=0;
    tam1=strlen(st1);
    tam2=strlen(st2);
    if(tam1>=tam2)
        maior=tam1;
    else
        maior=tam2;
    for(int i=0;i<maior;i++){
        cont++;
        if(cont<=tam1){
            stfim[x]=st1[i];
            x++;
        }
        if(cont<=tam2){
            stfim[x]=st2[i];
            x++;
        }
    }
    if(tam1+tam2 <= tamf && tam1+tam2 > maior)
		return 1;
	return 0;
}*/

int func(char st1[], char st2[], char stfim[], int tamf)
{
    int tam1, tam2, maior, cont=0, x=0;
    tam1=strlen(st1);
    tam2=strlen(st2);
    if(tam1>=tam2)
        maior=tam1;
    else
        maior=tam2;
    for(int i=0;i<maior;i++)
    {
        cont++;
        if(cont<=tam1){
            stfim[x]=st1[i];
            x++;
        }
        if(cont<=tam2){
            stfim[x]=st1[i];
            x++;
        }
    }
    if(tam1 + tam2<=tamf && tam1+tam2>=maior)
        return 1;
    return 0;
}
