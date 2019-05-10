#include <stdio.h>

int main() {
	int i, letra = 1, teste;

	
	scanf("%d", &teste);
	getchar();
	
	while (teste > 0) {
		char vet[51];
		gets(vet);
		for (i=0; vet[i] != '\0'; i++) {
		if (vet[i] == ' ') {
			letra = 1;
		} else if (letra == 1) {
			printf("%c", vet[i]);
			letra = 0;
			}
		}
		
		printf("\n");
		letra = 1;
		teste--;
	}
	
	return 0;
}
