#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    int N; cin >> N;
    int sol = 0;
    while(N--){
        int ki; cin >> ki;
        sol += (ki < 0) ? abs(ki) : 0;
    }
    cout << sol << endl;

return 0;
}
