#include<stdio.h>

int main () {
	int hora, h, m, s;
	
	scanf("%d", &hora);
	
	h = hora / 3600;
	m = (hora - (h * 3600)) / 60;
	s = hora - ((h * 3600)+ (m * 60));
	
	printf("%d:%d:%d\n", h, m, s);

	return 0;
}

