#include <bits/stdc++.h>
using namespace std;
#define sz(x) (int)(x).size()
long long compute_hash( string const&s){
    const long long p = 31;
    const long long m = 1e9+9;
    long long hash_value = 0;
    long long p_pow = 1;
    for(char c:s){
        hash_value =(hash_value+(c -'a'+1)*p_pow)%m;
        p_pow = (p_pow * p)%m;
    }
    return hash_value;
}

int main(){
    vector<string> vs = {"abc", "abbb", "abbb", "a", "fjdskl", "acc", "abc", "ccc", "zzz", "zz"};
    vector<pair<long long,int>> hashes(vs.size());
    for(int i = 0; i<(int)vs.size();++i){
        hashes[i] = {compute_hash(vs[i]),i};

    }

    sort(hashes.begin(), hashes.end());

    vector<vector<int>> groups;
    for(int i = 0; i < (int)vs.size() ; ++i){
        if ( i == 0 || hashes[i].first != hashes[i-1].first )
            groups.emplace_back();
        groups.back().push_back(hashes[i].second);
    }

    cout << "tes" << endl;




    return 0;
}
