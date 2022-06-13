#include <stdio.h>
void main(){
    int i;
    printf("Insira um numero de 1 a 5\n");
    scanf("%d", &i);
    switch(i)
    {
    case 1:
        printf("Ola");
        break;
    case 2:
        printf("Nerd");
        break;
    case 3:
        printf("Boi");
        break;
    case 4:
        printf("Reinaldo");
        break;
    case 5:
        printf("Shhh");
        break;
    default:
        printf("Numero n identificado");
        break;
    }
}
