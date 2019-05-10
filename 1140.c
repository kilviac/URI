#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
    int tamanho, k,f, i;
    char letra, letraM, t[1051], maiusculo;


    
    while (1) {
    	gets(t);

        if (t[0] == '*') break;

            tamanho = strlen(t);
            for (k = 0; k < tamanho; k++) {

                letra = t[0];
                letraM = tolower(t[0]);
                if (letra == letraM) {
                    letra = toupper(t[0]);
                }

                if (t[k] == ' ' && k < tamanho) {
                    maiusculo = t[k+1];
                    if ((t[k + 1] != letra) && (t[k + 1] != letraM)) {
                        printf("N\n");
                        break;
                    }

                }

                if (k == tamanho - 1){
                    printf("Y\n");
                }
            }

        for (i = 0; t[i] != '\0'; i++){
            t[i] = 0;
        }
        
    }


    return 0;
}
