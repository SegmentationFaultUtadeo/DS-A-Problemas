#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAXUI32 4294967295
#define MAXI32 2147483647
#define MAXUI64 18446744073709551615
#define MAXI64 9223372036854775807

int main(){
    unsigned int ui32bits = MAXUI32;
    int i32bits = MAXI32;
    unsigned long long int ui64bits = MAXUI64;
    long long int i64bits = MAXI64;

    printf("Maximo entero sin signo (32 bits): %u\n", ui32bits);
    printf("Maximo entero sin signo mas uno (32 bits): %u\n", ui32bits + 1);
    printf("Maximo entero con signo (32 bits): %d\n", i32bits);
    printf("Maximo entero con signo mas uno (32 bits): %d\n", i32bits+1);

    printf("Maximo entero sin signo (64 bits): %llu\n", ui64bits);
    printf("Maximo entero sin signo mas uno (64 bits): %llu\n", ui64bits + 1);
    printf("Maximo entero con signo (64 bits): %lld\n", i64bits);
    printf("Maximo entero con signo mas uno (64 bits): %lld\n", i64bits + 1);
    

    return 0;
}
