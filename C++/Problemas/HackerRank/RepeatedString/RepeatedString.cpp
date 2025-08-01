#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'repeatedString' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. LONG_INTEGER n
 */

long repeatedString(string s, long n) {
    ll div = n/(ll)s.size();
    ll remai = n%(ll)s.size();

    ll i = 0;
    ll ans = 0;

    while (remai--){
        if (s[i] == 'a') ans++;
        i++;
    }

    ll times = 0;

    for (char a : s) if (a == 'a') times++;

    return (times * div + ans);

    // Otra sol mas Naive

    ///////////////////////////////////////
    // ll ans = 0;                       //
    // ll i = 0;                         //
    // while (n--){                      //
    //     if (i == (ll)s.size()) i = 0; //
    //     if (s[i] == 'a') ans++;       //
    //     i++;                          //
    // }                                 //
    ///////////////////////////////////////
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string n_temp;
    getline(cin, n_temp);

    long n = stol(ltrim(rtrim(n_temp)));

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
