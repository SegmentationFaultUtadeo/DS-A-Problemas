#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

typedef long long ll;


ll binpowmod(ll x, ll y, ll n){
    x %= n;
    ll res = 1;
    while (y > 0){
        if (y & 1) res = res * x % n;
        x = x * x % n;
        y >>=1;
    }
    return res;
}


int main(){
    int c; cin >> c;
    while (c--){
        ll x, y, n; cin >> x >> y >> n;
        cout << ((ll) binpowmod(x, y, n)) << endl;
    }

    return 0;
}
