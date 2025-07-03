#include <bits/stdc++.h>
#define endl "\n"
using namespace std;


int main(){

    int n; cin >> n;
    while (n--){
        string name; cin >> name;
        int y_s, m_s, d_s; cin >> y_s; cin.get(); cin >> m_s; cin.get(); cin >> d_s;
        int y_b, m_b, d_b; cin >> y_b; cin.get(); cin >> m_b; cin.get(); cin >> d_b;
        int courses; cin >> courses;


        if (y_s >= 2010 || y_b >= 1991){
            cout << name << " eligible" << endl;
            continue;
        }
        if (courses >= 41){
            cout << name << " ineligible" << endl;
        }else{
            cout << name << " coach petitions" << endl;
        }


    }


    return 0;
}
