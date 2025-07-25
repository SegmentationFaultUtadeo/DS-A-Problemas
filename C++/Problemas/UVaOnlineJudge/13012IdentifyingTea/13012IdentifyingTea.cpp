#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef short int si;

int main(){
    si T;
    while (cin >> T){

        si ans = 0;
        for (int i = 0; i < 5; ++i){
            si num; cin >> num;
            if (num == T) ans++;
        }
        cout << ans << endl;

    }


    return 0;
}
