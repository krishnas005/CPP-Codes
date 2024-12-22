#include<bits/stdc++.h>
using namespace std;

// int main() {
    // int arr[8] = {1,2,1,3,4,5,1,1};
    // unordered_map<int, int> mp;
    // for(int i=0; i<8; ++i) mp[arr[i]]++;
    // int maxx = INT_MIN;
    // int ele = 0;
    // for(auto& i: mp) {
    //     maxx = max(maxx, i.second);
    //     if(maxx == i.second) ele = i.first;
    // }
    // cout << ele << ": " << maxx << endl;
    // int numRows = 5;
    // vector<vector<int>> ans(numRows);
    // for(int i=0; i<numRows; i++) {
    //     ans[i] = vector<int> (i+1, 1);
    //     for(int j=1; j<i; j++) {
    //         ans[i][j] = ans[i-1][j] + ans[i-1][j-1];
    //     }
    // }
    // for(int i=0; i<numRows; i++) {
    //     for(int j=0; j<ans[i].size(); j++) {
    //         cout << ans[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // return 0;
// }


struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* sortedArrayToBST(vector<int>& nums, int start, int end) {
    if (start > end) {
        return nullptr;
    }
    int mid = start + (end - start) / 2;
    TreeNode* node = new TreeNode(nums[mid]);
    node->left = sortedArrayToBST(nums, start, mid - 1);
    node->right = sortedArrayToBST(nums, mid + 1, end);
    return node;
}

TreeNode* sortedArrayToBST(vector<int>& nums) {
    return sortedArrayToBST(nums, 0, nums.size() - 1);
}

void printInOrder(TreeNode* root) {
    if (!root) return;
    printInOrder(root->left);
    cout << root->val << " ";
    printInOrder(root->right);
}

int main() {
    vector<int> sortedArray = {-10, -3, 0, 5, 9};
    TreeNode* root = sortedArrayToBST(sortedArray);
    cout << "In-order Traversal of the BST: ";
    printInOrder(root);
    cout << endl;
    return 0;
}