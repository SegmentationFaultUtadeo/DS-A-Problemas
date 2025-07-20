#include <bits/stdc++.h>
#define endl "\n"
using namespace std;


int main(){

    int R, N;
    int D;
    int i = 0;
    while (cin >> R >> N, !(N == 0 && R == 0)){
        i++;
        cout << "Case " << i << ": ";
        if (N >= R) cout << 0 << endl;
        else{
            D = ceil((R-N)/(double) N);
            if ( D > 26 ) cout << "impossible" << endl;
            else cout << D << endl;
        }


    }

    return 0;
}
