#include <stdio.h>
#include <string.h>
#define TAM 10

void main()
{
    char palavra[] = "Brasil\n\n";
    for(int i=0; i<6; i++)
        printf("%c\n", palavra[i]);
        printf("%s\n", palavra);
    //Escrever a frase ao contrario
    //Estrat�gia
    //usando o comando strlen que conta todos os caracteres da string
    //ent�o como a string come�a em 0 e acaba num caracter nulo
    //gets que obtem uma string do teclado
    //i vai come�ar ao ultimo valor da frase ou seja strlen(x)-1 at� chegar a [o]o primeiro caracter da string sempre decrementando ate chegar ent�o ao [0]
    char frase[TAM];
    printf("Introduza uma frase:\n");
    gets(frase);
    for(int i=strlen(frase)-1; i>=0; i--)
        printf("%c", frase[i]);

    char frase1[TAM];
    printf("\nIntroduza uma frase:\n");
    gets(frase1);
    int cont = contaPrimeiro(frase1);
    printf("%d", cont);

}

//fun�ao contaPrimeiro
int contaPrimeiro(char str[])
{
    char caracter;
    int i, contador;
    for(i=0; (isspace(str[i]) == 0 ||str[i] == "\t") && str[i] == '\0'; i++);
        caracter = toupper(str[i]);
    contador = 0;
    for(i; str[i]!='\0'; i++)
    {
        if(caracter == toupper(str[i]))
            contador++;
    }
    return contador;
}
