#include <stdio.h>

int main () {
	int total, aux, n100, n50, n20, n10, n5, n2, n1;
	
	scanf("%d", &total);
	
	n100 = total/100;
	aux = n100*100;
	
	n50 = (total-aux)/50;
	aux = (n100*100)+(n50*50);
	
	n20 = (total-aux)/20;
	aux = (n100*100)+(n50*50)+(n20*20);
	
	n10 = (total-aux)/10;
	aux = (n100*100)+(n50*50)+(n20*20)+(n10*10);
	
	n5 = (total-aux)/5;
	aux = (n100*100)+(n50*50)+(n20*20)+(n10*10)+(n5*5);
	
	n2 = ((total-aux)/2);
	aux = (n100*100)+(n50*50)+(n20*20)+(n10*10)+(n5*5)+(n2*2);
	
	n1 = (total-aux);
	
	printf("%d\n", total);
	
	printf("%d nota(s) de R$ 100,00\n", n100);
	printf("%d nota(s) de R$ 50,00\n", n50);
	printf("%d nota(s) de R$ 20,00\n", n20);
	printf("%d nota(s) de R$ 10,00\n", n10);
	printf("%d nota(s) de R$ 5,00\n", n5);
	printf("%d nota(s) de R$ 2,00\n", n2);
	printf("%d nota(s) de R$ 1,00\n", n1);
	
	return 0;
}

