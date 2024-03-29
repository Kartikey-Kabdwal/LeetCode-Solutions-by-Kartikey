class Solution
{
    public:
        bool check(TreeNode *root1, TreeNode *root2)
        {
            if (!root1 and!root2)
            {
                return true;
            }
            else if ((!root1 and root2) or(root1 and!root2))
            {
                return false;
            }
            else if (root1->val != root2->val)
            {
                return false;
            }
            else
            {
                return check(root1->left, root2->right) and check(root1->right, root2->left);
            }
        }
    bool isSymmetric(TreeNode *root)
    {

        return check(root->left, root->right);
    }
};