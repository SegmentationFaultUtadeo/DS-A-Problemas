#include <bits/stdc++.h>
#define endl '\n'
using namespace std;


int main(){
    int S; cin >> S;
    cout << S << ":" << endl;
    for(int i = 2; i <= (ceil((float)S/2)); ++i){
        int n = ceil((float)S/(2*i));
        int n_ = ceil((float)S/(2*i-1));
        if ((i * n_ + (i-1)*(n_-1) == S) || (i * n_ + (i-1)*(n_) == S)) cout << i << ',' <<  i-1 << endl;
        if ((i * n + i *(n-1) == S) || ( i * n + i * (n) == S )) cout << i << ',' << i << endl;
    }

    return 0;
}
