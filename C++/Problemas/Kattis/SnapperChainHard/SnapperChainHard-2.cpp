#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


string check_snap(ll N, ll K){
    while (N>0){
        if ((K & (1 << (N-1))) == 0) return "OFF";
        N--;
    }
    return "ON";
}


int main(){
    ll T; cin >> T;

    for (int i = 1; i <= T; ++i){
        cout << "Case #" << i << ": ";
        ll N, K; cin >> N >> K;
        cout << check_snap(N, K) << endl;
    }


    return 0;
}
