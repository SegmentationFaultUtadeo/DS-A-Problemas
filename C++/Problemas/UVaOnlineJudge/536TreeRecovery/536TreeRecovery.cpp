#include <bits/stdc++.h>

using namespace std;


string left_posorder(string str){
    string ans;
    if (!str.size()) return str;
    

    return ans;
}

int main(){

    string preorder, inorder;
    while(cin >> preorder >> inorder){
        char root = preorder[0];
        auto root_pos = inorder.find(root);

        string right_inorder = inorder.substr(root_pos+1);
        string left_inorder = inorder.substr(0, root_pos);

        string left_preorder = preorder.substr(1, (int)left_inorder.size());
        string right_preorder = preorder.substr((int)left_inorder.size()+1);
        
        string ans = 
    }

    return 0;
}
