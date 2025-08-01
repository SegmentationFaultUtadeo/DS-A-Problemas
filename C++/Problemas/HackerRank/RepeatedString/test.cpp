#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
using namespace std;
typedef string str;

int main(){

    str s; getline(cin, s);
    ll n; cin >> n;

    ll div = n/(ll)s.size();
    ll remai = n%(ll)s.size();

    ll i = 0;
    ll ans = 0;

    while (remai--){
        if (s[i] == 'a') ans++;
        i++;
    }

    ll times  = 0;

    for (char a : s) if (a == 'a') times++;

    cout << (times * div + ans) << endl;



    ///////////////////////////////////////
    // posible solucion naive... No      //
    // Funciona para n = 10^12           //
    //                                   //
    // ll ans =0;                        //
    // ll i = 0;                         //
    // while (n--){                      //
    //     if (i == (ll)s.size()) i = 0; //
    //     if (s[i] == 'a') ans++;       //
    //     i++;                          //
    // }                                 //
    // cout << ans << endl;              //
    ///////////////////////////////////////

    return 0;
}
