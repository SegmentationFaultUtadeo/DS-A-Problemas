#include <bits/stdc++.h>

#define endl "\n"

typedef long long ll;

using namespace std;

int main(){

    int N; cin >> N;


    while(N--){
    string n1, n2; cin >> n1 >> n2;

    reverse(n1.begin(), n1.end());
    reverse(n2.begin(), n2.end());
    ll result = stoi(n1) + stoi(n2);
    string a = to_string(result);
    reverse(a.begin(), a.end());
    cout << stoi(a) << endl;

    }
    return 0;
}
