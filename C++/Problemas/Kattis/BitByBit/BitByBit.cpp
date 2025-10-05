#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef short int si;

int main(){

    si n; cin >> n;
    while (n){
        vector<char> bits(32, '?');
        while(n--){
            string instruction; cin >> instruction;
            cin.get();
            if (instruction == "SET"){
                si i; cin >> i;
                bits[i] = '1';
            } else if (instruction == "CLEAR"){
                si i; cin >> i;
                bits[i] = '0';
            } else if (instruction == "OR"){
                si i, j; cin >> i >> j;
                if (bits[i] == '1' || bits[j] == '1') bits[i] = '1';
                else if (bits[i] == '?' || bits[j] == '?') bits[i] = '?';
                else bits[i] = '0';
            } else if (instruction == "AND"){
                si i, j; cin >> i >> j;
                if (bits[i] == '0' || bits[j] == '0') bits[i] = '0';
                else if (bits[i] == '?' || bits[j] == '?') bits[i] = '?';
                else bits[i] = (char)(bits[i]&bits[j]);
            }


        }
        for(int i = 31; i >=0; --i) cout << bits[i];
        cout << endl;
        cin >> n;
    }

    return 0;
}
