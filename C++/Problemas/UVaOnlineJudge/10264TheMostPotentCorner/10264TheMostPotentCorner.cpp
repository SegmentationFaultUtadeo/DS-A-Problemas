#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef short int si;
typedef long long ll;
#define FOR(i, n) for(ll i = 0; i < n; ++i)


vector<ll> extract_ones(ll n, ll N){
    vector<ll> res(N);
    while(n > 0){
        res[__builtin_ctz(n)] = 1;
        n &= ~(1 << __builtin_ctz(n));
    }
    return res;
}



int main(){

    si N;
    while(cin >> N){
        ll max_sum = LLONG_MIN;
        ll corners = powl(2, N);
        vector<ll> corner_weights(corners);
        FOR(i, corners) cin >> corner_weights[i];
        vector<vector<ll>> neighbours(corners, vector<ll>(N));
        ll bin_num = 0;
        vector<ll> sum_neighbours(corners, 0);
        FOR(i, corners){
            vector<ll> ones = extract_ones(bin_num, N);
            FOR(j, N){
                if(ones[j] == 1) {neighbours[i][j] = i - powl(2, j); sum_neighbours[i] += corner_weights[i - powl(2, j)];}
                else {neighbours[i][j] = i + powl(2, j); sum_neighbours[i] += corner_weights[i + powl(2, j)];}
            }
            ++bin_num;
        }

        FOR(i, corners){
            for(ll j : neighbours[i]){
                max_sum = max(max_sum, sum_neighbours[i] + sum_neighbours[j]);
            }
        }

        cout << max_sum << endl;

    }


    return 0;
}
