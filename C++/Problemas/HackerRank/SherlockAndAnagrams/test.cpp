#include<bits/stdc++.h>
#define endl "\n"
using namespace std;




int main(){
    short int q; cin >> q;
    cin.ignore();

    while(q--){

        string s;
        getline(cin, s);
        map<vector<int>, int> m;
        int total_pairs = 0;
        for (int i = 0; i < (int)s.size(); ++i){
            vector<int> v(26, 0);
            for (int j = i; j < (int)s.size(); ++j){
                v[(int)s[j] - (int)'a']++;
                m[v]++;
            }
        }

        for (auto p : m) total_pairs += p.second * (p.second - 1) / 2;

        cout << total_pairs << endl;
    }


    return 0;
}
