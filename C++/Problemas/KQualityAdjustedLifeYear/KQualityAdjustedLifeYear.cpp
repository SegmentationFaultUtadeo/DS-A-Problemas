#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int main(){
    short int N; cin >> N;
    float QALY {0};
    while (N--){
        float q, y; cin >> q >> y;
        QALY += q * y;
    }
    cout << setprecision(3) << fixed;
    cout << QALY << endl;

    return 0;
}
