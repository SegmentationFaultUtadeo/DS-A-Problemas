#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    short int n; cin >> n;
    short int ans=0;
    while (n--){
        short int p, v, t; cin >> p >> v >> t;
        if ((p + v + t) >= 2) ans++;
    }

    cout << ans << endl;
}
