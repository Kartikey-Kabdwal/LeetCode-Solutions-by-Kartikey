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
    bool ans=false;
    bool match(TreeNode *root,TreeNode* shoot)
    {
        if(root and shoot)
        {
            bool a=match(root->left,shoot->left);
            bool b=match(root->right,shoot->right);
            
            if(root->val==shoot->val and a and b)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if(!root and !shoot)
        {
            return true;
        }
        else
        {
        return false;
        }
    }
    void inorder(TreeNode* root, TreeNode* subroot)
    {
        if(root)
        {
            inorder(root->left,subroot);
            bool x=match(root,subroot);
                if(x)
                {
                    ans=x;
                }
            inorder(root->right,subroot);
        }
    }
    bool isSubtree(TreeNode* root, TreeNode* subroot) {
        inorder(root,subroot);
        return ans;
        
        
        
    }
};