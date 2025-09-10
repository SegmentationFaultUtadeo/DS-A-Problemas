#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef short int si;

int main(){

    si n; cin >> n;
    int res = 0;
    while(n--){
        int t; cin >> t;
        if (t < 0) res++;
    }
    cout << res << endl;


    return 0;
}
