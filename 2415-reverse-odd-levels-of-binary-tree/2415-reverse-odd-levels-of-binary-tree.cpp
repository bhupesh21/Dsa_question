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
    private:
    void reverse(TreeNode*rootleft,TreeNode*rootright,int val){
        if(rootright==NULL && rootleft==NULL)return;
        if(val%2==0)swap(rootleft->val,rootright->val);
        reverse(rootleft->left,rootright->right,val+1);
        reverse(rootleft->right,rootright->left,val+1);
    }
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
       
            reverse(root->left,root->right,0);
        return root;
    }
};