#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

        
bool check(){
    string exp {};
    stack<char> s {};
    cin >> exp;
    auto n {size(exp)};
    cout << boolalpha;
    for(int i = 0; i < n; i++){
        if (exp[i] == '{' || exp[i] == '[' || exp[i] == '(' )
            s.push(exp[i]);
        if (exp[i] == '}' && s.top() == '{')
            s.pop();
        if (exp[i] == ']' && s.top() == '[')
            s.pop();
        if (exp[i] == '(' && s.top() == '(')
            s.pop();
    }
    if (s.size() == 0)
        return true;
    return false;
}



int main(){
    
    cout << check() << endl;

    return 0;
}


