#include <stdlib.h>
#include <stdio.h>
#include <math.h>

unsigned long long DangiesFunctionEfficient(unsigned long long n){
    unsigned long long result = 0;
    result = ((n - 1) * n * (n + 1)) / 3;
    return result;
}


int main(){

    int totalCases, idCase;
    unsigned long long n;
    scanf("%d", &totalCases);

    for (idCase = 1; idCase <= totalCases; idCase++){
        scanf("%llu", &n);
        printf("%llu\n", DangiesFunctionEfficient(n));
    }

    return 0;
}
