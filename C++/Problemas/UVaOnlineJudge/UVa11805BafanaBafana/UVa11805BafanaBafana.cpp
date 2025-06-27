#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int main(){

    int T; cin >> T;
    int i {1};
    while (T--){
        int N, K, P; cin >> N >> K >> P;
        int result = (((K + P) % N) == 0 ? N : (K + P) % N );
        cout << "Case " << i << ": " << result << endl;
        i++;
    }

    return 0;
}
