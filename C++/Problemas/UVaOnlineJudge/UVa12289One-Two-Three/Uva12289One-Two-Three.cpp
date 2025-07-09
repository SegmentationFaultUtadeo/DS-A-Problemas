#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    short int N; cin >> N;
    cin.ignore();
    while (N--){
        string s1; getline(cin, s1);
        if (s1.size() == 5) cout << 3 << endl;
        else if ((s1[0] == 'o' && s1[2] == 'e') || (s1[1] == 'n' && s1[2] == 'e') || (s1[0] == 'o' && s1[1] == 'n')) cout << 1 << endl;
        else cout << 2 << endl;

    }

    return 0;
}
