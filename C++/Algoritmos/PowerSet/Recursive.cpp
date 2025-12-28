#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void generate(int idx, vector<int>& nums, vector<int>& curr, vector<vector<int>>& res){
    if (idx == (int)nums.size()){
        res.push_back(curr);
        return;
    }

    generate(idx + 1, nums, curr, res);
    
    curr.push_back(nums[idx]);
    generate(idx + 1, nums, curr, res);
    curr.pop_back();
}



int main(){
    int n; cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; ++i) cin >> nums[i];
    vector<int> curr;
    vector<vector<int>> res;
    generate(0, nums, curr, res);

    for (auto& s : res){
        cout << "{ ";
        for (int x : s) cout << x << " ";
        cout << endl;
    }

    return 0;
}
