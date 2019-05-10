#include <stdio.h>

int main ()
{
	long va = 0, n, x = 0;
	while (scanf("%ld", &n) != EOF){
		

		if (va<n) {
			 va = n;
		}

		else { 
			x = va +1;

			printf("%ld\n", x);
			break;
		}
		
	}
		
	
	if (x == 0) {
		
		x = va + 1;
		printf("%ld\n", x);
		
	return 0;
	}
}
