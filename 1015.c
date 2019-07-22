#include<stdio.h>
#include<math.h>

int main () {
	double x1, y1, x2, y2, distancia, par2, par1;
	
	scanf("%lf", &x1);
	scanf("%lf", &y1);
	scanf("%lf", &x2);
	scanf("%lf", &y2);
	
	par1 = x2 - x1;
	par2 = y2 - y1;
	
	distancia = sqrt(pow(par1, 2) + pow(par2, 2));
	
	printf("%.4lf\n", distancia);
	
	return 0;
}

