#include <stdio.h>

int main ()
{
    int i, n, ant, dps, j, p, f =1, contp = 0;

    while (f==1) {

        scanf("%i", &n);

        if ( n == 0) {
            break;
        }

        else {
            int vetp[n];

            for (i = 0; i < n; i = i + 1) {
                scanf("%i", &vetp[i]);
                contp = 0;
            }

            for (j = 0; j < n; j = j + 1) {

                if (j == n - 1) {
                    ant = vetp[n - 2];
                    dps = vetp[0];
                } else if (j == 0) {
                    ant = vetp[n - 1];
                    dps = vetp[1];
                } else {
                    ant = vetp[j - 1];
                    dps = vetp[j + 1];

                }

                p = vetp[j];

                if ((p > ant && p > dps) || (p < ant && p < dps)) {
                    contp = contp + 1;


                }
            }

            printf("%i\n", contp);

        }
    }

    return 0;
}
