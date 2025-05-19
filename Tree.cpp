#include <bits/stdc++.h>
using namespace std;
class Tree {
public:
    int data;
    Tree* left;
    Tree* right;
    Tree(int d) {
        data = d;
        left  = nullptr;
        right = nullptr;
    }
};
void lot(Tree* &root) {
    queue<Tree*> q;
    q.push(root);
    while(!q.empty()) {
        auto curr = q.front();
        q.pop();
        cout << curr->data << " ";
        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
    }
    cout << endl;
}
// Insert a node into the BST
Tree* insert(Tree* root, int val) {
    if(!root) return new Tree(val);
    if(val < root->data) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}
// Build BST from array
Tree* constructBST(vector<int>& arr) {
    Tree* root = nullptr;
    for(int val : arr) {
        root = insert(root, val);
    }
    return root;
}
void inorder(Tree* &root) {
    if(!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
Tree* constructLOT(vector<int>& arr) {
    Tree* root = new Tree(arr[0]);
    int i = 1;
    queue<Tree*> q;
    q.push(root);
    while(!q.empty() && i < arr.size()) {
        auto curr = q.front();
        q.pop();
        if(arr[i] != -1) {
            curr->left = new Tree(arr[i]);
            q.push(curr->left);
        }
        ++i;
        if(i < arr.size() && arr[i] != -1) {
            curr->right = new Tree(arr[i]);
            q.push(curr->right);
        }
        ++i;
    }
    return root;
}
Tree* build(vector<int>& preorder, int& preIdx, int inStart, int inEnd, map<int, int> inMap) {
    if(inStart > inEnd) return nullptr;
    int rootVal = preorder[preIdx];
    ++preIdx;
    Tree* root = new Tree(rootVal);
    int inIdx = inMap[rootVal];
    root->left  = build(preorder, preIdx, inStart, inIdx-1, inMap);
    root->right = build(preorder, preIdx, inIdx+1, inEnd, inMap);
    return root;
}
int height(Tree* root) {
    if(!root) return 0;
    int left = height(root->left);
    int right = height(root->right);
    return 1 + max(left, right);
}
int diam = 0;
int diameter(Tree* root) {
    if(!root) return 0;
    int left  = diameter(root->left);
    int right = diameter(root->right);
    diam = max(diam, left+right+1);
    return 1 + max(left, right);
}
int main() {
    // Tree* root = new Tree(5);
    // root->left = new Tree(1);
    // root->right = new Tree(4);
    // root->left->left = new Tree(2);
    // root->left->right = new Tree(3);
    // root->right->left = new Tree(6);
    vector<int> arr = {5, 1, 4, 2, 3, 6};
    Tree* root = constructLOT(arr);
    lot(root);
    // inorder(root);
    // cout << endl;
    // cout << root->data << endl;
    cout << height(root) << endl;
    diameter(root);
    cout << diam << endl;
    return 0;
}