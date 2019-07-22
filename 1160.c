#include<stdio.h>

int main() {
    int i, PA, PB, anos = 0, quant;
    double G1,G2;
    
    scanf("%d",&quant);
    
    for(i = 0; i < quant; i++){
        anos = 0;
        
    	scanf("%d %d %lf %lf",&PA,&PB,&G1,&G2);
    	
    	while(PA<=PB){
        	PA = PA + ((PA*G1)/100);
        	PB = PB + ((PB*G2)/100);
        	anos++;
        	
        if(anos > 100){
            printf("Mais de 1 seculo.\n");
            break;
        }
    }
    if(anos <= 100) {
    	printf("%d anos.\n", anos);
		}	
	}
	
	return 0;
}

