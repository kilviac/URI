#include <stdio.h>

int main() {
	
	double salarioFixo, salarioTotal,  vendas;
	
	char nome[20];
	
	scanf("%s", nome);
	scanf("%lf", &salarioFixo);
	scanf("%lf", &vendas);
	
	salarioTotal = salarioFixo + (vendas * 0.15);
	
	printf("TOTAL = R$ %.2f\n", salarioTotal);
	
	return 0;
}

