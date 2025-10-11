#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
#define sz(x) (int)(x).size()

string ans(int n){
    vector<bool> diffs(n-1, false);
    int first, prev = first;
    for (int i = 0; i < n; ++i){
        cin >> first;
        int diff = abs(prev - first);
        if (diff >= 1 && diff <= n-1) diffs[diff-1] = true;
        prev = first;
    }
    for( bool b: diffs )
        if (b == false)
            return "Not Jelly";
    return "Jolly";
}


int main(){
    int n;
    while(cin >> n) cout << ans(n) << endl;
    return 0;
}
