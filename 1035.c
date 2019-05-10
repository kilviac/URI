#include <stdio.h>

int main () {
	
	int a, b, c, d, somaCD, somaAB;
	
	scanf("%i %i %i %i", &a, &b, &c, &d);
	
	somaCD = c + d;
	somaAB = a + b;
	
	if (b > c && d > a && c >= 0 && d >= 0 && somaCD > somaAB && a%2 == 0) {
		printf("Valores aceitos\n");
	}
		
	else {
		printf("Valores nao aceitos\n");
	}
		
		
	return 0;
}
