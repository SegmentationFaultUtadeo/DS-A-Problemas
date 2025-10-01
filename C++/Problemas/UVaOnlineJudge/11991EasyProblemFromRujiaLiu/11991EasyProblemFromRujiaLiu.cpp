#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int)(x).size()
#define endl '\n';

typedef pair<int, int> ii;
typedef vector<ii> vii;


int  main (){
    int n, m;
    while(cin>>n>>m){
        vector<vii> AL(1000000, vii());
        for(int i = 0; i < n;++i){
            int temp; cin >> temp;
            AL[temp].push_back({temp, i});
        }
        while(m--){
            int k, v;
            cin >> k >> v;
            if((int)AL[v].size() >= k){
                cout<< AL[v][k-1].second+1 << endl;
            }
            else{
                cout<< 0 << endl;
            }
        }
    }
    return 0;
}
