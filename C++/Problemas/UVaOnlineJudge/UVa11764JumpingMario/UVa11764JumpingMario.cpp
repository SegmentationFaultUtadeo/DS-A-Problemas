#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){

    short int T,  i = 1; cin >> T;


    while (T--){
        short int N,  high = 0, low = 0; cin >> N;
        cout << "Case " << i << ": ";
        int prev; cin >> prev;
        N-=1;
        while (N--){
            int loop; cin >> loop;
            if (loop > prev) high++;
            if (loop < prev) low++;
            prev = loop;
        }
        cout << high << " " << low << endl;
        i++;
    }


    return 0;
}
