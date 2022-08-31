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
    void calc(TreeNode* root, int sum,vector<vector<int>>&ans,vector<int>temp)
    {
        if(!root)
        {
            return;
        }
        temp.push_back(root->val);
 if (root->val == sum && root->left ==  NULL && root->right == NULL) 
 {
     ans.push_back(temp);
     return ;
 }
  calc(root->left, sum-root->val,ans,temp);
        calc(root->right, sum-root->val,ans,temp);
        
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int k) {
        
        vector<vector<int>>ans;
        vector<int>temp;
         
         calc(root,k,ans,temp);
        return ans;
        
        
    }
};