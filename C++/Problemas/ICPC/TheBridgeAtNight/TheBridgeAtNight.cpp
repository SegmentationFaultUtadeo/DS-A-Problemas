#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    while(cin >> n && n != 0){
        vector<int> times(n);
        for(int i = 0; i < n; ++i){
            cin >> times[i];
        }

        sort(times.begin(), times.end());

        if (n == 1){
            cout << times[0] << endl;
            continue;
        }

        if (n == 2){
            cout << times[1] << endl;
            continue;
        }

        vector<int> dp(n, 0);
        dp[0] = times[0];
        dp[1] = times[1];

        for(int i = 2; i < n; ++i){
            int strategy1 = dp[i-2] + times[0] + times[i] + times[0] + times[1];
            int strategy2 = dp[i-2] + times[0] + times[i] + times[i-1] + times[0];

            dp[i] = min(strategy1, strategy2);
        }
        cout << dp[n-1] << endl;

    }

    return 0;
}
