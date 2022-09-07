/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root)
    {
        vector<int>res;
        inorder(res,root);
        return res;
    }
    void inorder(vector<int>&res ,TreeNode *r) {
        if(r==NULL){
            return;
        }
        inorder(res,r->left);
        res.push_back(r->val);//<<" ";
        inorder(res,r->right);
    }
};