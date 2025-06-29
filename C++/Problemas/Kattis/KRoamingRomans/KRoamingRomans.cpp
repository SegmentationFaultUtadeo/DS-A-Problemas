#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int main(){

    double X; cin >> X;

    long double resultado = ((1000.0 * (5280.0/4854.0)) * X) ;

    cout << lround(resultado) << endl;

    return 0;
}
