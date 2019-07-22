#include <stdio.h>

int main () {
	int n=1, i, k, max, dif , indice;
	
	while (n!=0) {
		int difMen = 999999;
		dif = 0;
		max=0;
		scanf("%d", &n);
		if (n != 0) {
			int vet[n];
		for (i=0; i<n; i++) {
			scanf("%d", &vet[i]);
			if (vet[i] >= max) {
				max = vet[i];
			}
		}
		
		for (k=0; k<n; k++) {
			dif = max - vet[k];
			if (dif != 0) {
				if (dif<difMen) {
					difMen = dif;
					indice = k + 1;
					
				}
			}
		}
			
		printf("%d\n", indice);
		
		} else {
			break;
		}
		
		
	}
	
	return 0;
}

