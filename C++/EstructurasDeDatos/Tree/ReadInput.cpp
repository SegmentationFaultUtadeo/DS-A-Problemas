#include <bits/stdc++.h>
#define endl '\n'

using namespace std;


int main(){

    int t; cin >> t;
    unordered_map<int, vector<int>> tree;

    for(int i = 1; i <= t; ++i) tree[i];

    while(t-- > 1){
        int key, val; cin >> key >> val;
        tree[key].push_back(val);
    }


    return 0;
}
