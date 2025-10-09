#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;

int main(){

    ll T; cin >> T;
    for(int i =1; i <= T; ++i){
        cout << "Case #" << i << ": " ;
        ll N, K; cin >> N >> K;
        cout << ((K % (ll)powl(2, N) == (ll)powl(2, N) - 1) ? "ON": "OFF" ) << endl;
    }
}
