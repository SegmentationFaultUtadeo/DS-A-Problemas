#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef short int si;
#define sz(x) (int)(x).size()

void naive(string s1, string s2){
    bool common = false;
    for (int i =0; i < sz(s1); ++i)
        for (int j = 0; j < sz(s2); ++j)
            if (s1[i] == s2[j]) {common = true; break;}

    if (common) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){

    si p; cin >> p;

    while (p--){
        string s1, s2;
        getline(cin, s1); getline(cin, s2);

    }

    // naive approach





    return 0;
}
