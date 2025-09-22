#include <bits/stdc++.h>
#define endl "\n"

typedef long long ll;

using namespace std;

void answer(ll N){

    char ans = 'N';
    for (ll x = 0; x <= N; ++x){
        ll y = sqrt(abs(x*x - N));
        if (x*x - y*y == N) {
            ans = 'Y';
            break;
        }
    }
    cout << ans << endl;
}



int main(){

    ll N; cin >> N;
    while (N != 0){
        answer(N);
        cin >> N;
    }



    return 0;
}
