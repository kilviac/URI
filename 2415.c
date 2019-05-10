#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 10000

int main(){ 	
	
	int vet[MAX], i, n, max, maxT;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
		scanf("%d", &vet[i]);
	
	for(i=1, max=1, maxT=1; i<n; i++){
		if(vet[i] == vet[i-1])
			max++;
		else{
			if(maxT < max)
				maxT = max;
			max = 1;
		}			
	}
	
	if(maxT < max) {
		maxT = max;
	}
	
	printf("%d\n", maxT);
	
	return 0;
}
