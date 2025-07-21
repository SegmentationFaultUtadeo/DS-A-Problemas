#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

typedef long long ll;

int main(){

    int n; cin >> n;
    int i = 0;
    int i_ans = i;
    ll max = LLONG_MAX;
    while (n--){
        ll temp; cin >> temp;
        if (temp < max){
            max = temp;
            i_ans = i;
        }
        i++;
    }

    cout << i_ans << endl;



    return 0;
}
