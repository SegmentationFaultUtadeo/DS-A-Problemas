#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

bool isPowerOfTwo(int n){
    return n > 0 && (n & (n - 1)) == 0;
}

int main(){

    int N, Q;

    while(cin >> N >> Q && (N != 0 || Q != 0)){
        vector<bool> isActive(N+1, false);

        for (int k = 0; k <= N; ++k){
            int ones = __builtin_popcount(k);
            isActive[k] = (ones % 2 == 1);
        }

        string result = "";
        for (int i =0 ; i < Q; ++i){
            int q;
            cin >> q;
            result += (isActive[q] ? 'A' : 'P');
        }

        cout << result << endl;
    }

    return 0;
}
