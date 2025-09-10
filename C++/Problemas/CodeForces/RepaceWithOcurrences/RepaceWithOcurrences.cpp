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



unordered_map<ull, ull> um;


int main(){
    fast;
    ui t; cin >> t;
    while (t--){
        int n; cin >> n;
        for(int i =0 ; i < n; ++i){
            int temp; cin >> temp;
            um[temp]++;
        }



    }






    return 0;
}
