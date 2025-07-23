#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){

    short int T; cin >> T;
    int tm = 0;

    while (T--){
        string s;
        int m;
        cin >> s;
        if (s == "donate") {cin >> m; tm+=m;}
        else if (s == "report") cout << tm << endl;
    }
    return 0;

}
