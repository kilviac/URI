#include <stdio.h>

int main () {
	int n, i, aux, vet [3000] = {0};
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &aux);
		vet[aux]++;	
	}
	
	for (i = 1; i <= 2000; i++) {
		if (vet[i] > 0) {
			printf("%d aparece %d vez(es)\n", i, vet [i]);
		}
	}
	
	return 0;
}
