#include <bits/stdc++.h>

#define endl "\n"

using namespace std;


int main(){

    short int l, r; cin >> l >> r;

    cout << ( (l == 0 && r == 0) ? "Not a moose" : (l == r) ? ("Even " + to_string(l+r)) : ("Odd " + to_string(2*max(l, r)) ) ) << endl;


    return 0;
}
