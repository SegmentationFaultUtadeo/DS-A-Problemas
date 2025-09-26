#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef short int si;
typedef long long ll;

int main(){
    si T; cin >> T;
    while(T--){
        ll P, R, F; cin >> P >> R >> F;
        ll years = 0;
        while(P <= F){
            P *= R;
            ++years;
        }
        cout << years << endl;
    }
    
    return 0;
}
