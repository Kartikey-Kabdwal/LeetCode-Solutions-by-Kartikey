
class Solution
{
public:
     int calc(TreeNode *root, int parent, int grandparent)
     {
          if (!root)
          {
               return 0;
          }
          if (grandparent % 2 == 0)
          {
               return root->val + calc(root->left, root->val, parent) + calc(root->right, root->val, parent);
          }
          return calc(root->left, root->val, parent) + calc(root->right, root->val, parent);
     }
     int sumEvenGrandparent(TreeNode *root)
     {

          return calc(root, -1, -1);
     }
};