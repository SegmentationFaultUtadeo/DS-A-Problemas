#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

vector<int> Solve(vector<int>& arr){
    int cont = 0;
    for(int i = 0; i < (int)arr.size();++i){
        for(int j = i+1; j< (int)arr.size();++j){
            if(arr[i]>arr[j]){
                ++cont;
                arr[i] = arr[i]^arr[j];
                arr[j] = arr[i]^arr[j];
                arr[i] = arr[i]^arr[j];
            }
        }
    }
    return {cont, arr[0], arr[(int)arr.size()-1]};
}


int main(){

    vector<int> arr = {4, 31, 2, 6, 1, 8};
    cout << arr.front() << " " << arr.back() << endl;
    // vector<int> ans = Solve(arr);
    // cout << "Array is sorted in " << ans[0]<<" swaps." <<endl;
    // cout << "First Element: "<<ans[1]<<endl;
    // cout << "Last Element: "<<ans[2]<<endl; 
}
