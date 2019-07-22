#include <stdio.h>

int main() {
	int t, at, ad, bt, bd, h, a, b;

	scanf("%d", &t);

	while(t > 0) {
		
		a = b = 0;
		
		scanf("%d %d %d %d", &at, &ad, &bt, &bd);
		scanf("%d", &h);
		
		while(1) {
			
			if(a <= b) {
				h -= at;
				b -= a;
				a = ad;

				if(h <= 0) {
					printf("Andre\n");
					break;
				}
			} else {
				h -= bt;
				a -= b;
				b = bd;

				if(h <= 0) {
					printf("Beto\n");
					break;
				}
			}
		}
		
		t--;
	}

	return 0;
}

