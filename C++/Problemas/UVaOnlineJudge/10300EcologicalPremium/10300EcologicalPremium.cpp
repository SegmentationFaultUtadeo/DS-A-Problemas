#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef short int si;


int main(){
    si n; cin >> n;
    while (n--){
        si f; cin >> f;
        int size_farmyard, number_animals, environfriend, final_premium=0.0;
        while (f--){
            cin >> size_farmyard >> number_animals >> environfriend;
            final_premium += (size_farmyard * environfriend);
        }
        cout << final_premium << endl;
    }


    return 0;
}
