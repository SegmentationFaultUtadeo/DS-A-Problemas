#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){

    short int T, i = 1; cin >> T;
    while (T--){
        cout << "Case " << i << ": ";
        short int N; cin >> N;
        int maxi = INT_MIN;
        while (N--){
            int iter; cin >> iter;
            if (iter > maxi) maxi = iter;
        }
        cout << maxi << endl;
        i++;
    }


    return 0;
}
