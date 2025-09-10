#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int)(x).size()

const int p = 53;
const int M = 1e9+9;

vector<int> comproveP(int n){
    vector<int> P (n,0);
    P[0]=1;
    for(int i=1;i<n;++i){
        P[i] = ((long long)P[i-1]*p)%M;
    }
    return P;
}

long long hashing(string const& seth){
    vector<int> p = comproveP((int)seth.size());
    long long h = 0;
    for(int i = 0; i< sz(seth);++i){
        h = h + ((seth[i]-'a')*p[i])%M;
    }
    return h;
}

int main(){
    string s1, s2; getline(cin,s1);
    while (getline(cin,s2)){
        int m = sz(s1),n = sz(s2);
        vector<int> res;
        long long hashObjt = hashing(s1);
        int l = 0, r = m-1;
        while(r<n){
            string window = s2.substr(l,m);
            long long hashCom = hashing(window);
            if(hashObjt == hashCom){
                res.push_back(l);
            }
        r ++;
        l ++;
        }

        if (res.size() >= 2){
            cout << res.front() << " " << res.back() << endl;
        }else if (res.size() == 1) {
            cout << res.front() << endl;
            }
        else {
            cout << endl;
        }
        getline(cin, s1);
    }



    return 0;
}


