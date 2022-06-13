#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 500

int Palindromo(char str[]) {
	int i, x = 0, cont;
	int metade=(strlen(str)-1)/2;
	for(i=0;i<strlen(metade))
}

void main() {
	char str1[MAX];
    printf("Introduza a frase a verificar se e Polindromo: ");
    gets(str1);
	if(Palindromo(str1))
		printf("\nA frase e um palindromo\n");
	else
		printf("\nA frase nao e um palindromo\n");
}
