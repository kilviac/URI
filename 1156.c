#include <stdio.h>

int main() {
    double a, b = 1, c, aux = 0;
    
    for(a = 1; a <= 39; a += 2) {
        c = a/b;
        aux += c;
        b *= 2;
    }
    
    printf("%.2lf\n", aux);
    
    return 0;
}
