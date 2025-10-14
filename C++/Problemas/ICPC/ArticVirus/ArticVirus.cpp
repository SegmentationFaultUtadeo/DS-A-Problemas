#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool isVirusRecursive(const string& s){
    int n = s.length();
    if (n == 0) return false;

    if(s == "A" || s == "T") return true;

    if(s[n-1] == 'C'){
        if (isVirusRecursive(s.substr(0, n-1))) return true;
    }

    if (s[0] == 'A' && n > 1){
        if (isVirusRecursive(s.substr(1))) return true;
    }

    if (s[0] == 'A' && n > 1){
        string rest = s.substr(1);
        reverse(rest.begin(), rest.end());
        if (isVirusRecursive(rest)) return true;
    }

    if (n >= 3 && s[0] == 'G' && s[n-1] == 'C'){
        string middle = s.substr(1, n-2);
        reverse(middle.begin(), middle.end());
        if (isVirusRecursive(middle)) return true;
    }

    return false;
}


int main(){

    int n;
    string s;
    while(cin >> n >> s){
        cout << ((s == "A" || s == "T") ? "simple" :
                 (isVirusRecursive(s)) ? "mutation" :
                 "doomed") << endl;

    }


    return 0;
}
