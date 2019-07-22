#include <stdio.h>

int main () {
    int quant, x, y, i, j, k;
    
    scanf("%d", &quant);
    
    for (i = 1; i <= quant; i++) {
        scanf("%d %d", &x, &y);
       
        if (x%2 == 1) {
            k = 0;
            for (j = 1; j <= y; j++) {
                k += x;
                x += 2;
            }
            printf("%d\n", k);
        } else {
            x++;
            k = 0;
            for (j = 1; j <= y; j++) {
                k += x;
                x += 2;
            }
            printf("%d\n", k);
        }
   
         }
    return 0;
}
  
