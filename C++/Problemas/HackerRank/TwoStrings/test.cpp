#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef short int si;
#define sz(x) (int)(x).size()


// Solución Naive
void naive(string s1, string s2){
    bool common = false;
    for (int i =0; i < sz(s1); ++i)
        for (int j = 0; j < sz(s2); ++j)
            if (s1[i] == s2[j]) {common = true; break;}

    // Equivalente a
    for (char c1 : s1)
        for (char c2 : s2)
            if (c1 == c2) {common = true; break;}

    if (common) cout << "YES" << endl;
    else cout << "NO" << endl;
}


int main(){

    si p; cin >> p;
    cin.ignore();
    while (p--){
        string s1, s2;
        getline(cin, s1); getline(cin, s2);
        // naive approach: fácil aunque ineficiente O(n^2)
        // naive(s1, s2);

        // Solución con hasmaps
        unordered_map<char, int> um;

        for (char c : s1) if (um.count(c) == 0) um[c]++;
        for (char c : s2) if (um.count(c) > 0) um[c]++;

        bool common = false;
        for (auto p : um) if (p.second > 1) {common = true; break;}

        if (common) cout << "YES" << endl;
        else cout << "NO" << endl;

    }





    return 0;
}
