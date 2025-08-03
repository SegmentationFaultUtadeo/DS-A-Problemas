#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;


int main(){
    int n, d; cin >> n >> d;
    queue<ll> q;

    for(int i = 0; i < n; ++i){
        ll temp; cin >> temp;
        q.push(temp);
    }

    while(d--){
        ll temp = q.front();
        q.pop();
        q.push(temp);
    }
    vector<ll> ans;
    for(; !q.empty(); q.pop()) ans.push_back(q.front());

    for(int i : ans)cout << i << " ";
    cout << endl;





    return 0;
}
