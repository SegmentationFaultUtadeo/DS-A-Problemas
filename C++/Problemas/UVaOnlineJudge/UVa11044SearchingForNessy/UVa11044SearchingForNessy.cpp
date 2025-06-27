#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int main(){

    int t; cin >> t;

    while (t--){
        double n, m; cin >> n >> m;
        int resultado = (ceil((n-2.0)/3.0) * ceil((m-2.0)/3.0));
        cout << resultado << endl;
    }

    return 0;
}
