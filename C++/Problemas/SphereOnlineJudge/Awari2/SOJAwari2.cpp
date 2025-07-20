#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
typedef unsigned short int usi;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main(){
    fast;
    int N; cin >> N;
    while (N != -1){
        int P[N];
        for (int i = 0; i < N; i++) cin >> P[i];

        for (int i = 0; i < N; i++){
            if (P[i] == i+1){
                P[i] = 0;
                for (int j = 0; j < i ; j++) P[j]++;
                i = -1;
            }
        }
        for (int i = 0; i < N; i++){
            if (P[i] != 0){
                cout << "N" << endl;
                break;
            }
            if (i == N-1){
                cout << "S" << endl;
            }
        }
        cin >> N;
    }

    return 0;
}
