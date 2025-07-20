#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int main(){

    short int a, b, c, n; cin >> a >> b >> c >> n;

    cout << (((a >= 1) && (b >= 1) && (c >= 1) && (n >= 3) && (a+b+c >= n)) ? "YES" : "NO") << endl;


    return 0;
}
