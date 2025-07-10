#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){

    int n, i = 0;
    while (cin >> n){
        int max =  -1e7;
        int min = 1e7;
        while (n--){
            int n2;
            cin >> n2;
            if (n2 > max) max = n2;
            if (n2 < min) min = n2;
        }
        cout << "Case " << ++i << ": " << min << " " << max << " " << (max - min) << endl;
    }


    return 0;
}
