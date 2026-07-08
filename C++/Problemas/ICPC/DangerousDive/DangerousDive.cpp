#include <bits/stdc++.h>

using namespace std;
#define ll long long


int main(){

    int N, R; cin >> N >> R;

    vector<int> people(N+1, 0);
    
    for (int i = 1; i <= R; ++i){
        int input; cin >> input;
        people[input] = input; 
    }

    if (N == R){
        cout << '*' << endl;
        return 0;
    }


    for (int i = 1; i <= N; ++i){
        if (people[i] != i) cout << i << " ";
    }

    cout << endl;
    

    return 0;
}
