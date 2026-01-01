#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){


    int option = 0;
    printf("Seleccione el metodo de solucion (escribir sin comillas):\n");
    printf("\" 1 \"  Metodo naive (funcional pero lento)\n");
    printf("\" 2 \"  Metodo mates (pensar mas pero mejor)\n");
    scanf("%i", &option);

    if (option & 1){
        unsigned long long int n, i, triangular;

        while (scanf("%llu", &n) && (n > 0)) {
            triangular = 0;
            for ( i = 1; triangular < n; ++i) triangular += 1;

            if (triangular == n) printf("YES\n");
            else printf("NO\n");

        }
        return 0;
    } else {
        unsigned long long int n, triangular, k, kplus1;

        while (scanf("%llu", &n) && (n > 0)){
            k = (-1 + (unsigned long long int) sqrt(1 + 8*(double)n)) / 2;
            kplus1 = k + 1;

            if (!(k & 1)) k/=2;
            if (!(kplus1 & 1)) kplus1/=2;

            triangular = k * kplus1;
            
            if (triangular == n) printf("YES\n");
            else printf("NO\n");
        }
        return 0;
    }
 

    return 0;
}
