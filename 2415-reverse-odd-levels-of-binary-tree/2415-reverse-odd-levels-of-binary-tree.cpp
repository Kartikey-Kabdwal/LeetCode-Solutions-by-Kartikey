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
    void solve(TreeNode* a,TreeNode* b,int level)
    {
        if(!a and !b)
        {
            return;
        }
        if(level%2!=0)
        {
            int tmp=a->val;
            a->val=b->val;
            b->val=tmp;
            
        }
        solve(a->left,b->right,level+1);
        solve(a->right,b->left,level+1);
        
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
      
        solve(root->left,root->right,1);
        return root;
        
    }
};