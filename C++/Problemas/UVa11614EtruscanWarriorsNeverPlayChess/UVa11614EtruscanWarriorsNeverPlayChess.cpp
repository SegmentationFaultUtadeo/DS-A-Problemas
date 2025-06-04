#include <bits/stdc++.h>

#define endl "\n"
#define ll long long

using namespace std;

int main(){

    int t; cin >> t;
    while (t--){
        ll n; cin >> n;
        ll k = floor((-1 + sqrt(1 + 8.0*n))/2);
        cout << k << endl;
    }


    return 0;
}
