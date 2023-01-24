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
    void calc(TreeNode* root,int level,unordered_map<int,int>&m)
    {
        if(!root)
        {
            return;
        }
        m[level]+=root->val;
        calc(root->left,level+1,m);
        calc(root->right,level+1,m);
        
    }
    int deepestLeavesSum(TreeNode* root) {
        
        unordered_map<int,int>m;
        calc(root,0,m);
        int a=-1,b=0;
        
        for(auto it:m)
        {
            if(a<it.first)
            {
                a=it.first;
                b=it.second;
            }
        }
        return b;
        
    }
};