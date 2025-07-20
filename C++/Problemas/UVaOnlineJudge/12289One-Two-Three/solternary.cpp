#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){

    short int N; cin >> N;
    cin.ignore();
    while (N--){
        string s1; getline(cin, s1);
        cout << ((s1.size() == 5) ? 3 :
                 ((s1[0] == 'o' && s1[2] == 'e') || (s1[1] == 'n' && s1[2] == 'e') || (s1[0] == 'o' && s1[1] == 'n')) ? 1 : 2) << endl;
    }


    return 0;
}
