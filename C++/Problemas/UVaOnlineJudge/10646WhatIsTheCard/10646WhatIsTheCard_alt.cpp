#include <bits/stdc++.h>
#define endl '\n'
using namespace std;


int main(){
    int n; cin >> n;
    for (int caso = 1; caso <= n; ++caso){
        unordered_map<string, int> card_values;
        vector<string> cards(52);
        for (int i = 0; i < 52; ++i) {
            cin >> cards[i];
            card_values[cards[i]] = (cards[i][0] - '0' < 10) ? (int)cards[i][0]-'0' : 10;
        }
        int Y =0;
        int R1 = 26;

        for (int i = 0; i < 3; ++i){
            string top_card = cards[R1];
            int X = card_values[top_card];
            Y += X + 1 + 10 - X;
            R1 -= 1 - (10 - X);
        }

        cout << "Case " << caso << ": " << cards[Y - 1] << endl;
        
    }
}
