#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

map<int, int> m;

int sockMerchant(int n, vector<int> ar){
    int result = 0;
    for (int i : ar) m[i]++;
    for (const auto& pair : m) result+= pair.second/2;
    return result;
}


int main(){
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; ++i) {
        int temp; cin >> temp;
        vec.push_back(temp);
    }
    cout << sockMerchant(n, vec) << endl;


    return 0;
}
