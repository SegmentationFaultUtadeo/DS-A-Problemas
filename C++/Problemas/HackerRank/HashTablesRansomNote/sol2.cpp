#include <bits/stdc++.h>

using namespace std;

unordered_map<string, int> freq;


int main(){
    int n, m; cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        string temp; cin >> temp;
        freq[temp]++;
    }
    bool flag = true;
    for (int i =0 ; i < m; ++i){
        string temp; cin >> temp;
        if ((!freq.count(temp)) || (!freq[temp])) flag = false;
        else freq[temp]--;
    }

    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}
