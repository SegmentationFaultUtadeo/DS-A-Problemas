#include <stdlib.h>
#include <stdio.h>
#include <tgmath.h>
#include <string.h>
#define ull unsigned long long int
#define ld long double


ull bashkara(ull n, bool ceil){
    if (ceil) return (ull)ceill((-1 + sqrtl((ld)1 + 8*n))/2);
    return (ull)((-1 + sqrtl((ld)1 + 8*n))/2);
}


int main(){

    ull a, b;
    
    while (scanf("%llu %llu", &a, &b) && (a|b)){
        if (a == b){
            ull new_b = bashkara(b, false);
            new_b = (new_b*(new_b + 1))/2;
            if (new_b == b) printf("1\n");
            else printf("0\n");
        } else {
            a = bashkara(a, true);
            b = bashkara(b, false);
            printf("%llu\n", b-a+1);            
        }
    }
    return 0;
}



