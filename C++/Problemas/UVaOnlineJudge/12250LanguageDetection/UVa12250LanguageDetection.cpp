#include <bits/stdc++.h>
#define endl "\n"

using namespace std;


int main(){

    string in; cin >> in;
    short int i = 1;

    while (in != "#"){
        cout << "Case " << i << ": " <<  ((in == "HELLO") ? "ENGLISH" : (in == "HOLA") ? "SPANISH" : (in == "HALLO") ? "GERMAN" : (in == "BONJOUR") ? "FRENCH" : (in == "CIAO") ? "ITALIAN" : (in == "ZDRAVSTVUJTE") ? "RUSSIAN" : "UNKNOWN") << endl;
        cin >> in;
        i++;
    }


    return 0;
}
