#include <stdio.h>

int main() {
	int n, cod[20000] = {0}, nota[20000] = {0}, max, turma = 1, i, j;
	
	scanf ("%d", &n);
	
	while (n != 0) {
		max = 0;
		for (i=0; i<n; i++) {
			scanf ("%d %d", &cod[i], &nota[i]);
			if (nota[i]>max) {
				max = nota[i];
			}
		}

		printf("Turma %d\n", turma);
		for (j=0; j<n; j++) {
			if (nota[j] >= max) {
				printf("%i ", cod[j]);
			}
			if (j==n-1) {
				printf("\n\n");
			}
		}
	
		turma++;
    scanf ("%d", &n);	
	}	
		
	return 0;	
}
