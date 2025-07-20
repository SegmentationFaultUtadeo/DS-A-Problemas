#include <bits/stdc++.h>
#define endl "\n"
using namespace std;


int main(){

    unsigned short int N, M; cin >> N >> M;

    short int P = N-M;

    cout << (  (P < 0 && abs(P) != 1) ? ("Dr. Chaz will have " + to_string(abs(P)) + " pieces of chicken left over!") : (P < 0 && abs(P) == 1) ? ("Dr. Chaz will have " + to_string(abs(P)) + " piece of chicken left over!") : (P > 0 && P != 1) ? ("Dr. Chaz needs " + to_string(P) + " more pieces of chicken!" ): ("Dr. Chaz needs " + to_string(P) + " more piece of chicken!")) << endl;

    return 0;
}
