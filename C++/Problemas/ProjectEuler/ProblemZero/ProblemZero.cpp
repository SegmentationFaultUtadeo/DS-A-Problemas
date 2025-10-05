#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;

int main(){

    ll sum = 0;
    for(ll i = 1; i <= 928000; ++i){
        if (i*i % 2) sum += i*i;
    }
    cout << sum << endl;



return 0;
}
