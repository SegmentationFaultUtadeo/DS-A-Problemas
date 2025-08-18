#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (long long)(x).size()

typedef long long ll;
typedef short int si;
typedef unsigned long long ull;
typedef long double ld;
typedef unsigned int ui;
typedef string str;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<ui> vui;
typedef vector<int> vi;
typedef vector<ll> vll;


int main(){
    fast;

    ui n; cin >> n;
    vi v;
    v.resize(n);
    for (ui i = 0; i < n; ++i) cin >> v[i];

    int swaps = 0;
    for (ui i = 0; i < n; ++i){
        if (v[i] != (int)i+1){
            const auto itr = find(all(v), i+1);
            auto indx = distance(v.begin(), itr);
            iter_swap(v.begin() + i, v.begin() + indx);
            swaps++;
        }
    }

    cout << swaps << endl;

    return 0;
}
