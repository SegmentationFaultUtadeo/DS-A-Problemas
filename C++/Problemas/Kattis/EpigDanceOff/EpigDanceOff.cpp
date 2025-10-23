#include <bits/stdc++.h>

using namespace std;

int main(){

    int N, M; cin >> N >> M;
    vector<vector<int>> player(N, vector<int>(M));
    cin.ignore();
    for(int i = 0; i < N; ++i){
        string str; getline(cin, str);
        for(int j = 0; j < M; ++j){
            if (str[j] == '$') player[i][j] = 1;
            else player[i][j] = 0;
            
        }
    }
    vector<vector<int>> columns(M, vector<int>(N));
    for(int i = 0; i < N; ++i){
        for (int j = 0; j < M; ++j){
            columns[j][i] = player[i][j];
        }
    }

    int ans = 0;
    for(int i = 0; i < M; ++i){
        if (accumulate(columns[i].begin(), columns[i].end(), 0) == 0) ++ans;
    }

    cout << (ans+1) << endl;

    return 0;
}
