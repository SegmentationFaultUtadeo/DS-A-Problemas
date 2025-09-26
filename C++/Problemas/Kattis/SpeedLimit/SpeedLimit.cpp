#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef short int si;

int main(){
    si n; cin >> n;

    while (n != -1){
        si distance = 0, t_prev = 0;
        while(n--){
            si s, t; cin >> s >> t;
            distance += (t - t_prev) * s;
            t_prev = t;
        }
        cout << distance << " miles" << endl;
        cin >> n;
    }

return 0;
}
