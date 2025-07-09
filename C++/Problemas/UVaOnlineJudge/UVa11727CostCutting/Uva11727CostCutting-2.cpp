#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    short int T, i = 1; cin >> T;
    while (T--){
        int e1, e2, e3; cin >> e1 >> e2 >> e3;
        cout << "Case " << i << ": " ;
        cout << (((e1 >= e2 && e1<= e3) || (e1 <= e2 && e1 >= e3)) ? e1 :
                 ((e2 >= e1 && e2 <= e3) || (e2 <=e1 && e2 >= e3)) ? e2 :
                 e3) << endl;
        i++;
    }

    return 0;
}
