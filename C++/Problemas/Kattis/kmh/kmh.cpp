#include <bits/stdc++.h>
using namespace std;
#define si short int
#define ll long long
#define endl '\n'

int next(int n){
    do{
        ++n;
    } while(n % 10 != 0);
    return n;
}

int main(){

    si N; cin >> N;

    int max_speed = 10;
    while(N--){
        string L; cin >> L;
        if (L != "/"){
            int n = stoi(L);
            cout << n << endl;
            max_speed = max(n, max_speed);
        } else {
            cout << next(max_speed) << endl;
        }
    }
     

    return 0;
}
