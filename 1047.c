#include <stdio.h>

int main() {
    int hI, hF, mI, mF, hT, mT;
    scanf("%d %d %d %d", &hI, &mI, &hF, &mF);

    hT = hF - hI;

    if (hT < 0) {
        hT = 24 + (hF - hI);
    }

 	mT = mF - mI;
 
 	if (mT < 0) {
   		mT = 60 + (mF - mI);
   		hT--;
  	}

    if (hI == hF && mI == mF) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    } else {
    	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hT, mT);	
	}
	
    return 0;
}

