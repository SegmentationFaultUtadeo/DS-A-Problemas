#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, n; cin >> a >> b >> c >> n;
    cout << (((a >= 1) && (b >= 1) && (c >= 1) && (a + b + c >= n) && (n >= 3)) ? "YES\n" : "NO\n");

    return 0;
}
