#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
typedef short int si;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

int main(){
    fast;
    ll n; cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; ++i){
        ll temp; cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    ll i = 0, k = v.size() - 2, maxi_fuerza = 0;
    while (i < k){
        maxi_fuerza += v[k];
        i++;
        k -= 2;
    }
    cout << maxi_fuerza << endl;

    return 0;
}
