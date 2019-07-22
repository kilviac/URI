#include <stdio.h>

int main () {
	
	int a, b, c, aux;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if (a > b && b > c) {
		printf("%d\n%d\n%d", c, b, a);
	} else if (a > c && c > b) {
		printf("%d\n%d\n%d", b, c, a);
	} else if (b > a && a > c) {
		printf("%d\n%d\n%d", c, a, b);
	} else if (b > c && c > a) {
		printf("%d\n%d\n%d", a, c, b);
	} else if (c > a && a > b) {
		printf("%d\n%d\n%d", b, a, c);
	} else if (c > b && b > a) {
		printf("%d\n%d\n%d", a, b, c);
	}
	
	printf("\n\n%d\n%d\n%d\n", a, b, c);
	
	return 0;
}

