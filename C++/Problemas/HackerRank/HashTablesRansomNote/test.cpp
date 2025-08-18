#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, m; cin >> n >> m;
    vector<int> magazine(n);
    vector<int> note(m);
    for (int i = 0; i < n; ++i) cin >> magazine[i];
    for (int i = 0; i < m; ++i) cin >> note[i];

    bool flag = true;
    for (int i = 0; i < m; ++i){
        if (!flag) break;
        for (int j = 0; j < n; ++j){
            if (note[i] == magazine[j]) {flag = true; magazine.erase(magazine.begin()+j); break;}
            flag = false;
        }
    }

    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
