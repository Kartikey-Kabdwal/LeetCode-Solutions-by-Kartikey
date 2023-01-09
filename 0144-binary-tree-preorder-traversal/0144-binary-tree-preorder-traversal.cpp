class Solution {
public:
     vector<int>v;
void preorder(TreeNode *root)
{
     if(!root)
        {
            return;
        }
            v.push_back(root->val);
            preorderTraversal(root->left);
            preorderTraversal(root->right); 
}
   
    vector<int> preorderTraversal(TreeNode* root) {
       preorder(root);
        return v;
    }
};