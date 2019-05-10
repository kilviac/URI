#include <stdio.h>

int main ()
{
    int t,i,j;
    scanf("%i", &t);

    for (j = 0; j<t; j = j + 1) {
        int d,n, divisao;
        double p;
        float x, maior_troco = 0;
        scanf("%i%i", &d, &n);

        for (i = 0; i<n; i = i + 1) {
            scanf("%lf", &p);
            divisao = d/p;

            if (divisao < 1) {
                x = divisao;

                if (x > maior_troco) {
                    maior_troco = x;
                }
            }

            else {

            x = (d - (divisao*p));


                if (x>maior_troco) {
                maior_troco = x;
            }

            }

        }

        printf("%.2f\n", maior_troco);

    }


    return 0;


}
