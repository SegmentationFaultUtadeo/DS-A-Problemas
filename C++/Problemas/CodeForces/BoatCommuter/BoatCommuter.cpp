#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef short int si;

map<int, vector<int>> logs;
map<int, int> ans;

int main(){
    si n; cin >> n;
    int m, k; cin >> m >> k;

    for (int i = 1; i < m+1; ++i){
        logs[i]; ans[i];
    }

    while (k--){
        int puerto, tarjeta; cin >> puerto >> tarjeta;
        logs[tarjeta].push_back(puerto);
    }

    for (int i = 1; i < m+1; ++i){

        if (!(logs[i].size() % 2)){
            int j = 0, total_sum = 0;

            while ((unsigned long)j <= (logs[i].size() - 1)){
                if (logs[i][j] != logs[i][j+1]) total_sum += abs(logs[i][j] - logs[i][j+1]);
                else total_sum += 100;
                j += 2;
            }

            ans[i] = total_sum;
        }
        else {
            int j = 0, total_sum = 0;

            while ((unsigned long)j <= (logs[i].size() - 2) && (logs[i].size() > 2) ) {
                if (logs[i][j] != logs[i][j+1]) total_sum += abs(logs[i][j] - logs[i][j+1]);
                else total_sum += 100;
                j+= 2;
            }

            total_sum += 100;
            ans[i] = total_sum;
        }
    }

    for (int i = 1; i < m+1; ++i) cout << ans[i] << " ";
    cout << endl;
    return 0;
}
