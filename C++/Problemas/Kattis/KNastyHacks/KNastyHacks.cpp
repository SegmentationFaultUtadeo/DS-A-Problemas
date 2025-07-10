#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){

    short int N; cin >> N;
    while (N--){
        int r, e, c; cin >> r >> e >> c;
        cout << ( (e - c > r) ? "advertise" :
                  (e - c < r) ? "do not advertise" : "does not matter") << endl;
    }


    return 0;
}
