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
    void calc(TreeNode* root,vector<string>&ans,string s)
    {
        if(!root->left and !root->right)
        {
            s+=to_string(root->val);
            ans.push_back(s);
            return;
        }
        if(root->left){calc(root->left,ans,s+to_string(root->val)+"->");}
        if(root->right){calc(root->right,ans,s+to_string(root->val)+"->");}
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string s;
        if(root==nullptr)
        {
            return ans;
        }
        calc(root,ans,s);
        return ans;
        
    }
};