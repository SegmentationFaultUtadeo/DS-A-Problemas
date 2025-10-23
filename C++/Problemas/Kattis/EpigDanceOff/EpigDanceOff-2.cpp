#include <bits/stdc++.h>

using namespace std;
typedef short int si;

vector<int> compute_T(vector<vector<int>>& P, int N, int M){
    vector<int> T(N);
    vector<vector<int>> finish = P;
    for(int i = 1; i <= N; ++i){
        for(int j = 1; j <= M; ++j){
            finish[i][j] = max(finish[i][j-1], finish[i-1][j]) + P[i][j];
        }
    }
    for(int i =1; i <= N; ++i) T[i-1] = finish[i][M];
    return T;
}

int main(){

    si N, M; cin >> N >> M;

    vector<vector<int>> P(M+1, vector<int>(N+1, 0));

    for(int i = 1; i <= N; ++i){
        for(int j = 1; j <= M; ++j){
            ;
        }
    }

    return 0;
}
