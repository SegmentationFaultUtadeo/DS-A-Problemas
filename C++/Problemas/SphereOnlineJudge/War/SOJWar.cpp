#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
typedef unsigned short int usi;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main(){
    fast;

    int S; in >> S;
    ll Q[S], N[S];
    for (int i = 0; i < S; i++)  cin >> Q[i];
    for (int i = 0; i < S; i++)  cin >> N[i];
    sort(Q, Q+S); sort(N, N + S);

    int i = 0, j = 0, c =0;


    while (i < S && j < S){
        if (N[i] > Q[j]){
            c++;
            i++;
            j++;
        }else {
            i++;
        }
    }

    cout << c << endl;





    return 0;
}
