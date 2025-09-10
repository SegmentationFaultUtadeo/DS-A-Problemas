#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

typedef long long ll;
typedef short int si;
typedef unsigned long long ull;
typedef long double ld;
typedef unsigned int ui;
typedef string str;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;




int main(){
    fast;

    int t, k, x; cin >> t;

    while (t--){
        cin >> k >> x;
        while (k--) x *= 2;
        cout << x << endl;
    }


    return 0;
}
