#include <stdio.h>
#include <string.h>
#define MAX 500

void maiorPalavra (char frase[], char palavra[]);

void main()
{
	char palavra[MAX];
	char fr[]= "Era uma linda coisa anticonstitucionalissimamente pois sim";

	maiorPalavra(fr, palavra);

	printf("\nMaior palavra de: %s => ", fr);
	puts(palavra);
}

/*void maiorPalavra (char frase[], char palavra[]) {
	int i, j, x;
	char maior[MAX];
	for (i = 0; frase[i] != '\0'; i++) {
		x = 0;
		for(j = i; frase[j] != ' '; j++, i++, x++){
			maior[x] = frase[j];
		}
		maior[x] = '\0';
		if(strlen(maior) > strlen(palavra)){
			for(x = 0; x <= strlen(maior); x++) {
				palavra[x] = maior[x];
			}
		}
	}

}*/
void maiorPalavra (char frase[], char palavra[]){
    int i, j, x;
    char maior[MAX];
    for(i=0; frase[i] != '\0';i++){
        x=0;
        for(j=i;frase[j] != '';j++){
            maior[x]=frase[j];
        }
        maior[x]='\0';
        if(strlen(maior) > strlen(palavra)){
            for(x=0;x<=strlen(maior);x++)
                palavra[x]=maior[x];
        }
    }
}
