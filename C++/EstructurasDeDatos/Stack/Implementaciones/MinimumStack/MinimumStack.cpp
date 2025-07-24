#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){

    stack<pair<int, int>> st;

    // Agregar elementos al stack
    int arr[5] = {5, 4, 3, 2, 1};
    for (int i : arr){
        int new_elem = i;
        int new_min = st.empty() ? new_elem : min(new_elem, st.top().second);
        st.push({new_elem, new_min});
    }

    // Iterar (crear copia y se destruye esta)
    stack<pair<int, int>> copystack = st;
    while(!copystack.empty()){
        cout << copystack.top().first << " " << endl << "min: " << copystack.top().second << endl;
        copystack.pop();
    }



    return 0;
}
