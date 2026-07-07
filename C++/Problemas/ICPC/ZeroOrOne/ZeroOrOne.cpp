#include <bits/stdc++.h>

using namespace std;


int main(){

    short int A, B, C; cin >> A >> B >> C;

    short int suma = A + B + C;

    if (suma == 3 || suma == 0) cout << '*' << endl;
    else if (A != B && B == C) cout << 'A' << endl;
    else if (B != A && A == C) cout << 'B' << endl;
    else if (C != A && A == B) cout << 'C' << endl;
    

    return 0;
}
