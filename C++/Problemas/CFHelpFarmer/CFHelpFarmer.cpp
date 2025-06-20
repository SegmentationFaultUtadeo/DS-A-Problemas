#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

typedef long long ll;

int main(){

    ll n; cin >> n;
    ll mini = LLONG_MAX, maxo = LLONG_MIN;

    for (ll a = 1; a *a * a <= n; ++a){
        if (n  % a == 0){
            for (ll b = 1; b * b <= n/a; ++b){
                if ((n/a) % b == 0){
                    ll c = (n/a)/b;
                    maxo = max(maxo, (a + 1) * (b + 2) * (c + 2));
                    maxo = max(maxo, (a + 2) * (b + 1) * (c + 2));
                    maxo = max(maxo, (a + 2) * (b + 2) * (c + 1));
                    mini = min(mini, (a + 1) * (b + 2) * (c + 2));
                    mini = min(mini, (a + 2) * (b + 1) * (c + 2));
                    mini = min(mini, (a + 2) * (b + 2) * (c + 1));
                }
            }
        }
    }

    cout << (mini - n) << " " << (maxo - n) << endl;


    return 0;
}
