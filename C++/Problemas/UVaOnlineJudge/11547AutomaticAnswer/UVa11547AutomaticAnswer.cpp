#include <bits/stdc++.h>

#define endl "\n"
#define ll long long
using namespace std;

int main(){


    short int t; cin >> t;
    while (t--){

        ll n; cin >> n;
        int resultado = (abs(((((n*567)/9 + 7492) * 235)/47) - 498)/10)%10;
        cout << resultado << endl;

    }


    return 0;
}
