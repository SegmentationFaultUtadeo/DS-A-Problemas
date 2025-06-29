#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int main(){

    short int G, S, C; cin >> G >> S >> C;

    string victory;
    string treasure;

    short int points = 1*C + 2*S + 3*G;

    treasure = (points < 3) ? "Copper" : (points < 6) ? "Silver" : "Gold";
    victory = (points < 5 && points >= 2) ? "Estate" : (points < 8 && points >= 5) ? "Duchy" : (points >= 8) ? "Province": "";

    cout << ((victory.empty()) ? treasure : (victory + " or " + treasure) ) << endl;;


    return 0;
}
