#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    int t; cin >> t;


    while (t--){
        vector<int> v;
        int n,k ; cin >> n >> k;
        while (n--){
            int temp; cin >> temp;
            v.push_back(temp);
        }
        int hike = 0;
        int i = 0;
        while (i <= (int) v.size() - k ){
            vector<int> window = {v.begin() + i, v.begin() + k + i};
            if (accumulate(window.begin(), window.end(), 0) == 0){
                i = i + k + 1;
                hike++;
            }else i++;
        }
        cout << hike << endl;
    }



    return 0;
}
