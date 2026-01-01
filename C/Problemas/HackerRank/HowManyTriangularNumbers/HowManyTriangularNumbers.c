#include <stdlib.h>
#include <stdio.h>
#include <tgmath.h>
#define ull unsigned long long int
#define ld long double


ull bashkara(ull n, bool ceil){
    if (ceil) return (ull)ceill((-1 + sqrtl((ld)1 + 8*n))/2);
    return (ull)((-1 + sqrtl((ld)1 + 8*n))/2);
}


int main(){

    ull a, b;
    
    while (scanf("%llu %llu", &a, &b) && (a|b)){
        a = bashkara(a, true);
        b = bashkara(b, false);
        printf("%llu\n", b-a+1);
    }
    return 0;
}
