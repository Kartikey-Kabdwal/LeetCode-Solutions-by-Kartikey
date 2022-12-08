
class Solution {
public:
    void getLeaves(TreeNode *root, vector<int> &leaves)
{
     if (!root)
          return;
     if (!root->left && !root->right)
          leaves.push_back(root->val);
     getLeaves(root->left, leaves);
     getLeaves(root->right, leaves);
}
bool leafSimilar(TreeNode *root1, TreeNode *root2)
{
     vector<int> leaves1, leaves2;
     getLeaves(root1, leaves1);
     getLeaves(root2, leaves2);
     if (leaves1.size() != leaves2.size())
          return false;
     vector<int>::iterator it1 = leaves1.begin(), it2 = leaves2.begin();
     while (it1 != leaves1.end())
     {
          if (*it1 != *it2)
               return false;
          ++it1;
          ++it2;
     }
     return true;
}
};