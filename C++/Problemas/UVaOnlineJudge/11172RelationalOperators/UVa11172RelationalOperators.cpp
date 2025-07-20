#include <bits/stdc++.h>
#define endl "\n"

typedef unsigned long long ull;

using namespace std;

int main(){

    short int t; cin >> t;
    while (t--){
        ull a, b; cin >> a >> b;
        cout << ((a < b) ? "<" : (a > b) ? ">" : "=") << endl;
    }

    return 0;
}
