#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef short int si;

void solve(){
    si t; cin >> t;
    while (t--){
        vector<int> v;
        int n; cin >> n;
        v.resize(n);
        int b = 0;
        for (int i = 0; i < n; ++i) cin >> v[i];
        bool chaotic = false;
        for (int i = 0; i < (int)v.size(); ++i){
            if (v[i] - (i+1) > 2){
                cout << "Too chaotic"<< endl;
                chaotic = true;
                break;
            }
            for (int j = max(0, v[i]-2); j <= i-1; ++j) if (v[j] > v[i]) b++;
        }
        if (!chaotic) cout << b << endl;
    }
}

int main(){
    solve();

    return 0;
}
