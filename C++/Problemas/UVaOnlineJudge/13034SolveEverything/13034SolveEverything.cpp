#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef short int si;

int main(){

    si S; cin >> S;
    for (si i = 1; i < S+1; ++i){
        cout << "Set #" << i << ": ";
        bool ans = true;
        for (int j = 0; j < 13; ++j){
            si temp; cin >> temp;
            if (!temp) ans = false;
        }
        if (ans) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}
