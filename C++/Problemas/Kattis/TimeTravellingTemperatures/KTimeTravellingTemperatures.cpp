#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){

    long double X, Y; cin >> X >> Y;

    cout << setprecision(8) << fixed;
    if (Y != 1){
        cout << (long double)(X / (1 - Y)) << endl;
    }else if (X == 0){
        cout << "ALL GOOD" << endl;
    }else {
        cout << "IMPOSSIBLE" << endl;
    }



    return 0;
}
