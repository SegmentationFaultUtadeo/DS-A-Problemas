#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef short int si;

int main(){
    si T; cin >> T;
    while (T--){
        si a_i; cin >> a_i;
        bool escala = true;
        for (int i = 0; i < 4; ++i){
            si a_i_1; cin >> a_i_1;
            if (a_i + 1 != a_i_1) escala = false;
            a_i = a_i_1;
        }
        if (escala) cout << "Y" << endl;
        else cout << "N" << endl;
    }



    return 0;
}
