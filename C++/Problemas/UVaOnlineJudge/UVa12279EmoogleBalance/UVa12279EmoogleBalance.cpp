#include <bits/stdc++.h>
#define endl "\n"
typedef short int si;
using namespace std;

int main(){

    si N, i = 1; cin >> N;
    while (N != 0){
        si c_i, e_g = 0;
        cout << "Case " << i << ": ";
        while (N--){
            cin >> c_i;
            if (c_i > 0) e_g++;
            else e_g--;
        }
        cout << e_g << endl;
        cin >> N;
        i++;
    }

    return 0;
}
