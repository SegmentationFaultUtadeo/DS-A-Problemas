#include <stdlib.h>
#include <stdio.h>
#include <tgmath.h>


int main(){

    unsigned long long int n;

    while (scanf("%llu", &n) && (n != 0))
        printf("%llu\n", (unsigned long long)ceill(sqrtl((long double)n)));
    

    return 0;
}
