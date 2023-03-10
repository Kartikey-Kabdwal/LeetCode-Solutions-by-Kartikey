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
    unordered_map<long long,long long >m;
    
    void calc(TreeNode *root,int lev)
    {
        if(!root)
        {
            return;
        }
        m[lev]+=root->val;
        calc(root->left,lev+1);
        calc(root->right,lev+1);

    }
    
    long long kthLargestLevelSum(TreeNode* root, int k) {
        
        calc(root,0);
        priority_queue<long long>pq;
        for(auto it:m)
        {
            pq.push(it.second);
        }
        long long x=0;
        while(k--)
        {
            x=pq.top();
            pq.pop();
            if(pq.empty() and k)
            {
                return -1;
            }
            
        }
        return x;
        
    }
};