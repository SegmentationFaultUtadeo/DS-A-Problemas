#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


int main(){

    int choose;
    scanf("%d", &choose);

    if (choose & 1){
        // naive
        int totalCases, idCase, s, page, gauss;

        scanf("%d", &totalCases);

        for (idCase = 1; idCase <= totalCases; idCase++){
            scanf("%d", &s);

            gauss = 0;
            for (page = 1; gauss <= s; ++page)
                gauss += page; /* gauss = gauss + page */

            printf("%d %d\n", gauss - s, page - 1);
        
        }
    } else {
        // Mates

        unsigned long long int s, page, gauss;
        int totalCases, idCase;

        scanf("%d", &totalCases);

        for (idCase = 1; idCase <= totalCases; idCase++){
            scanf("%llu", &s);
            page = (-1 + (unsigned long long int)sqrt(1 + 8 * s)) / 2;
            gauss = ((page + 1) * (page + 2)) / 2;

            printf("%llu %llu\n", gauss - s, page + 1);
            
        }
        
    }
    

    


    return 0;
}
