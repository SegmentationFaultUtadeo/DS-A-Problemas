#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    while(cin >> n){
        uint32_t ans = 0, byte = 0;
        cout << n << " converts to ";
        uint32_t x = static_cast<uint32_t>(n);
        for (int i = 0; i < 4; ++i){
            byte = x % (1 << 8);
            x >>= 8;
            ans |= byte;
            if (i != 3) ans <<= 8;
        }
        cout << static_cast<int32_t>(ans) << endl;
    }
    


    return 0;
}
