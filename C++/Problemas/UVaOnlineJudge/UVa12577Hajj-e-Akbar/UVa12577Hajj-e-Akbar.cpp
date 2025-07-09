#include <bits/stdc++.h>
#define endl "\n"
using namespace std;


int main(){
    string s;
    int i = 1;
    while (getline(cin, s), s[0] != '*'){
        cout << "Case " << i << ": Hajj-e-";
        cout << ( (s == "Hajj") ? "Akbar" : "Asghar"  ) << endl;
        i++;
    }

    return 0;
}
