#include <stdio.h>
#define TAM 80
void main(void)
{
    char st[TAM], c;
    int i = 0;
    printf("Diga uma string com menos do que 80 caracteres:");
    scanf("%c", &c);
    for ( i=0; i<(TAM-1) && c!='\n' ; i++)
    {
        st[i]=c;
        scanf("%c", &c);
    }
    st[i] = '\0';
    for (i=0; st[i]!='\0'; i++)
        printf("%c", st[i]);
    printf("\n");
}
