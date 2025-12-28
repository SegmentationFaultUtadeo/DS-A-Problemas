#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

void isPossible(int indx, vector<int>& nums, vector<int>& curr, vector<int>& ans){
    if(indx == (int)nums.size()){
        ans.push_back(accumulate(curr.begin(), curr.end(), 0) % 360);
        return;
    }

    curr.push_back(nums[indx] * -1);
    isPossible(indx + 1, nums, curr, ans);
    curr.pop_back();
    curr.push_back(nums[indx]);
    isPossible(indx + 1, nums, curr, ans);
    curr.pop_back();
}


int main(){
    int n; cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; ++i) cin >> nums[i];

    vector<int> ans;
    vector<int> curr;

    isPossible(0, nums, curr, ans);

    cout << (find(ans.begin(), ans.end(), 0) != ans.end() ? "YES" : "NO") << endl; 

    return 0;
}
