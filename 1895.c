 #include <stdio.h>

int main () {
	int n, t, l, i, alice=0, bob=0;
	
	scanf("%d %d %d", &n, &t, &l);
	
	n=n-1;
	
	int pilha[n];
	
	for (i=0; i<n; i++) {
		scanf("%d", &pilha[i]);
	}
	
	i=0;
	while (i<n) {
		
		if (i%2==0) {
			if (modulo (t, pilha[i]) <= l) {
				alice += modulo (t, pilha[i]);
				t = pilha[i];
			}
		}
		
		else {
			if (modulo (t, pilha[i]) <= l) {
				bob += modulo (t, pilha[i]);
				t = pilha[i];
			}
		}
		
		i++;		
	}
	
	printf("%d %d\n", alice, bob);
	
	return 0;
}

int modulo (x, y) {
	int result;
	if (x - y < 0) {
		result = (x - y) * (-1) ;
	} else {
		result = x - y;
	}
	
	return result;
}

