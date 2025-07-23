#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef short int si;

int main(){

    si t; cin >> t;
    while (t--){
        si n; cin >> n;
        si maxi = SHRT_MIN;
        si mini = SHRT_MAX;
        while (n--){
            si temp; cin >> temp;
            if (temp > maxi) maxi = temp;
            if (temp < mini) mini = temp;
        }
        cout << (2 * (maxi - mini)) << endl;
    }
}
