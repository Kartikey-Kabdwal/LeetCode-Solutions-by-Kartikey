class Solution
{
public:
     int ans = 0;
     pair<int, int> solve(TreeNode *root)
     {
          if (!root)
          {
               return {0, 0};
          }

          auto Left = solve(root->left);
          auto Right = solve(root->right);

          int n = Left.first + Right.first + 1;
          int sum = Left.second + Right.second + root->val;

          if (root->val == sum / n)
          {
               ans++;
          }
          return {n, sum};
     }
    
     int averageOfSubtree(TreeNode *root)
     {
          solve(root);
          return ans;
     }
};