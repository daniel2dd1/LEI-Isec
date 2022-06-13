#include <stdio.h>
void main()
{
    int val1, val2;
    printf("Insira 2 valores:\n");
    scanf("%d %d", &val1, &val2);
    if(val2==0){
        printf("Divisao nao permitida");
    } else{
        if(val1%val2==0){
            printf("%d e divisivel por %d", val1, val2);
        }
        else{
            printf("%d nao e divisivel por %d", val1, val2);
        }
    }
}
