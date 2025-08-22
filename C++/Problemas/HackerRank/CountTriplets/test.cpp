#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;


int main(){

    ll n, r; cin >> n >> r;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; ++i) cin >> arr[i];

    unordered_map<int, vector<int>> ijk;
    unordered_map<int, int> freq_values;

    for (int i = 0; i < (int)arr.size(); ++i){
        freq_values[arr[i]]++;
        vector<int> pos_values(2, 0);
        pos_values[0] = arr[i]*r; pos_values[1] = arr[i] * r * r;
        ijk[i] = pos_values;
    }



    return 0;
}
