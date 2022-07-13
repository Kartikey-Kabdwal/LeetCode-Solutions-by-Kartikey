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
    int ans=0;
void traverse(TreeNode *root,int max)
{
    if(root!=NULL)
    {
        if(root->val>=max)
        {
            ans++;
            max=root->val;
        }
        traverse(root->left,max);
        traverse(root->right,max);
    }
    return;
}
int goodNodes(TreeNode* root) {
    if(root==NULL)
        return ans;
    traverse(root,root->val);
    return ans;
}

};