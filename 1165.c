#include <stdio.h>

int main () {
    int i, n, numero, divisores;
    scanf ("%i", &n);
    int vet [n];

    for (i = 0; i < n; i++) {
        scanf ("%i", &numero);
        vet [i] = numero;
    }


    for (i = 0; i<n; i++) {
        numero = vet [i];
        divisores = numPrimo(numero);
        if (divisores == 2) {
            printf("%i eh primo\n", numero);
        }
        else { printf("%i nao eh primo\n", numero); }
    }

    return 0;
}

int numPrimo (int numero) {
    int i, cont = 0;
    for (i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            cont = cont + 1;
        }
    }
    return cont;
}
