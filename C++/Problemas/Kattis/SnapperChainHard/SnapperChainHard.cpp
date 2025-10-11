#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;

ll binpow(ll b){
    ll res = 1, a = 2;
    while(b > 0){
        if (b & 1) res = res *a;
        a = a *a;
        b >>=1;
    }
    return res;
}

int main(){
    ll T; cin >> T;
    for(int i = 1; i <= T; ++i){
        cout << "Case #" << i << ": ";
        ll N, K; cin >> N >> K;
        cout << ((K % binpow(N) == binpow(N)-1) ? "ON" : "OFF") << endl;
    }


    return 0;
}
