#include<stdio.h>
#include<string.h>

void main()
{
    char frase[]="Socorram-me Em Marrocos";
	if(Palindromo(str1))
		printf("\nA frase e um palindromo\n");
	else
		printf("\nA frase nao e um palindromo\n");
}

int Palindromo(char str[])
{
    int i, last;
    last=strlen(str);
    char inverso[];
    for(i=strlen(str);i>=0;i--)
        gets(inverso);
    comp=strcmp(str, inverso);
    if(comp < 0) {
      return0;
   } else if(comp > 0) {
      return 0;
   } else {
      return 1;
   }
}
