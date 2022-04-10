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
    bool check(TreeNode *a,TreeNode *b)
    {
        if(!a and !b)
        {
            return true;
        }
        else if((a and !b) or (!a and b) )
        {
            return false;
        }
        else if(a->val !=b->val)
        {
            return false;
        }
        else
        {
            return check(a->left,b->right) and check(a->right,b->left);
        }
    }
    bool isSymmetric(TreeNode* root) {
        return check(root->left,root->right);
        
    }
};