#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    int N; cin >> N;
    while (N--){
        double a, b, c; cin >> a >> b >> c;
        cout << ( (a + b == c) ? "Possible" :
                  ((a - b == c) || (b - a == c))? "Possible" :
                  (a * b == c) ? "Possible" :
                  (a / b == c || b / a == c) ? "Possible" : "Impossible"  ) << endl;
    }
    return 0;
}
