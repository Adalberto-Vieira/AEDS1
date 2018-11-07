#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    char *s;
	int n;
	printf("Qual o tamanho de sua string? ");
	scanf("%d",&n);
	getchar();
	s = (char *)malloc((n+1) * sizeof(char));
	printf("\nDigite sua string ");
	gets(s);
	for(int i=0; i<strlen(s)&&i<4; i++){
        printf("%c ",s[i]);
	}
	free(s);
	printf("\nQual o tamanho de sua string? ");
	scanf("%d",&n);
	getchar();
	s = (char *)malloc((n+1) * sizeof(char));
	printf("\nDigite sua string ");
	gets(s);
	printf("\nSua String invertida %s",strrev(s));
	free(s);

}
