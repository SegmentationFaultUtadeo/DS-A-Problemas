#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){
    short int X; cin >> X;
    short int N; cin >> N;
    short int X_n = X;

    while (N--){
        short int P_i; cin >> P_i;
        X_n += X - P_i;
    }

    cout << X_n << endl;


    return 0;
}
