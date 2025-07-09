#include <bits/stdc++.h>
#define endl "\n"

using namespace std;


int main(){
    short int T, i =1; cin >> T;
    while (T--){
        int e1, e2, e3; cin >> e1 >> e2 >> e3;
        cout << "Case " << i << ": ";
        if ((e1 >= e2 && e1 <= e3) || (e1 <= e2 && e1 >= e3)) cout << e1 << endl;
        else if ((e2 >= e1 && e2 <= e3) || (e2 <= e1 && e2 >= e3)) cout << e2 << endl;
        else cout << e3 << endl;
        i++;
    }

    return 0;
}
