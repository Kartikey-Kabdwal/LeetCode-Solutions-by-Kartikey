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
    int depth(TreeNode* root)
    {
        int c1=0,c2=0;
        if(root==NULL)
        {
            return 0;
        }
        c1=minDepth(root->left)+1;
        c2=minDepth(root->right)+1;
        return min(c1,c2)==1 ? max(c1,c2):min(c1,c2);
        
    }
    int minDepth(TreeNode* root) {
        int x=depth(root);
        return x;
        
        
        
    }
};