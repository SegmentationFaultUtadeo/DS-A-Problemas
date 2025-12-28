#include <bits/stdc++.h>

using namespace std;

int main(){

    int N; cin >> N;
    vector<vector<int>> matrix(N, vector<int>(N, 0));

    for (int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            cin >> matrix[i][j];
        }
    }
    vector<int> code(N);

    for(int i = 0; i < N; ++i){
        for (int j = 0; j < N; ++j){
            code[i] |= matrix[i][j];
        }
    }

    for (int i : code) cout << i << " ";
    cout << endl;
    

    return 0;
}
