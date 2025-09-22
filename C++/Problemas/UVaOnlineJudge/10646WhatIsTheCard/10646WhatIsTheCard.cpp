#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int get_value(string s){
    return (s[0] - '0' < 10) ? (int)s[0]-'0' : 10;
}



int main(){
    int n; cin >> n;
    for (int caso = 1; caso <= n; ++caso){
        unordered_map<string, int>card_values;
        vector<string>hand(25);
        vector<string>pile(27);
        for (int i =0; i < 27; ++i) {
            cin >> pile[i];
            card_values[pile[i]] = get_value(pile[i]);
        }
        for (int i =0; i < 25; ++i) {
            cin >> hand[i];
            card_values[pile[i]] = get_value(pile[i]);
        }

        int Y = 0;

        for (int i = 0; i < 3; ++i){
            string top_card = pile.back();
            int X = card_values[top_card];
            Y += X;
            pile.resize(pile.size() - 1 - (10 - X));
        }

        vector<string> final_vec;
        final_vec.reserve(pile.size() + hand.size());
        final_vec.insert(final_vec.begin(), pile.begin(), pile.end());
        final_vec.insert(final_vec.end(), hand.begin(), hand.end());

        cout << "Case " << caso << ": " << final_vec[Y-1] << endl;

    }

    return 0;
}
