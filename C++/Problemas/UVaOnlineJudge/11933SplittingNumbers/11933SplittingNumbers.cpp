#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;

int main(){
    ll n; cin >> n;

    while(n){
        ll a=0, b=0;
        int i = 0;
        int j = 0;
        while (n > 0){
            int T = ((n) & -(n));
            j = 1 << __builtin_ctz(T);
            if (!(i % 2)) a |= j;
            else b |= j;
            n &= ~(j);
            ++i;
        }
        cout << a << " " << b << endl;
        cin >> n;
    }
    return 0;
}
