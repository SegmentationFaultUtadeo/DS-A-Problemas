#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;


int main(){

    ll n, r; cin >> n >> r;
    vector<long long> arr(n, 0);
    for (long long i = 0; i < n; ++i) cin >> arr[i];
    long long count = 0;

    unordered_map<long long, long long> pairs;
    unordered_map<long long, long long> triplets;

    for (auto i : arr){
        count += triplets[i];
        triplets[i*r] += pairs[i];
        pairs[i*r]++;
    }

    cout << count << endl;


return 0;
}
