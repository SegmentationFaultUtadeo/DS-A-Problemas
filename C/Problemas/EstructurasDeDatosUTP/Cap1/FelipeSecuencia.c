#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


void naive(){
    unsigned long long int n, s;
    int totalCases, idTestCase;
    double sum;

    scanf("%d", &totalCases);

    for (idTestCase = 1; idTestCase <= totalCases; idTestCase++){
        scanf("%llu", &s);

        sum = 0.0;

        for (n = 1; sum <= (double)s; n++)
            sum += 1.0 / (sqrt(n) + sqrt(n + 1));

        printf("%llu", n -1);
    }
    
}


void math(){
    unsigned long long int n, s;
    int totalCases, idCase;

    scanf("%d", &totalCases);

    for (idCase = 1; idCase <= totalCases; idCase++){
        scanf("%llu", &s);
        n = (s + 1) * (s + 1) - 1;
        printf("%llu\n", n);
    }
    
}


int main(){
    naive();
    math();
    return 0;
}
