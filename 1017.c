#include<stdio.h>
#include<math.h>

int main () {
	int tempo, velocidade, distancia;
	float gasolina;
	
	scanf("%d", &tempo);
	scanf("%d", &velocidade);
	
	distancia = velocidade * tempo;
	
	gasolina = distancia / 12.0;
	
	printf("%.3lf\n", gasolina);
	
	return 0;
}

