#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){

    short int T, i {1}; cin >> T;

    while (T--){
        short int L, W, H; cin >> L >> W >> H;
        cout << ((L <= 20 && W <= 20 && H <= 20) ? "Case " + to_string(i) + ": good" : "Case " + to_string(i) + ": bad") << endl;
        i++;
    }

    return 0;
}
