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
    TreeNode* rec(vector<int>&nums,int s,int e){
        if(s>=e)return NULL;
        int mid=(s+e)/2;
        TreeNode*node=new TreeNode(nums[mid]);
        node->left=rec(nums,s,mid);
        node->right=rec(nums,mid+1,e);
        return node;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       // if(root->left->val!=root>right->val)//so return the both l and r value;
        return rec(nums,0,nums.size());
    }
};