#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef short int si;

int main(){

    si K; cin >> K;
    while (K != 0){
        si N, M; cin >> N >> M;
        while (K--){
            si X, Y; cin >> X >> Y;
            if (X == N || Y == M) cout << "divisa" << endl;
            else if (X < N && Y > M) cout << "NO" << endl;
            else if (X > N && Y > M) cout << "NE" << endl;
            else if (X < N && Y < M) cout << "SO" << endl;
            else if (X > N && Y < M) cout << "SE" << endl;
        }
        cin >> K;

    }


    return 0;
}
