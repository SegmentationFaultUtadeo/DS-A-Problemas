#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef short int si;


string sol(si &n, si &dm){
    si k = 0;
    while (n--){
        si temp; cin >> temp;
        if (temp <= dm){
            return "It hadn't snowed this early in " + to_string(k) + " years!";
        }
        ++k;
    }
    return "It had never snowed this early!";
}



int main(){
    si n, dm; cin >> n >> dm;
    cout << sol(n, dm) << endl;


    return 0;
}
