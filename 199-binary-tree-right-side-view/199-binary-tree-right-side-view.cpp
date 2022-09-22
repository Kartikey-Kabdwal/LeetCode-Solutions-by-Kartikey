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
    void calc(TreeNode* root,vector<int>&v,int level)
    {
        if(!root)
        {
            return ;
        }
        if(level==v.size())
        {
            v.push_back(root->val);
        }
        
        calc(root->right,v,level+1);
        calc(root->left,v,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        
        int level=0;
        vector<int>v;
         calc(root,v,level);
        return v;
        
    }
};