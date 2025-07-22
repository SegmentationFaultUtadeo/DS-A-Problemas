#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

bool quote = true;

int main(){
    string s;
    char c;
    while(cin.get(c)){
        if (c == '"'){
            if (quote) cout << "``";
            else cout << "''";
            quote = !quote;
        }
        else cout << c;
    }
    return 0;
}
