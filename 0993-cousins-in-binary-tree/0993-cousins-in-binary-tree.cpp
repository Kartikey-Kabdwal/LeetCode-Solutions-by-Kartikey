class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*>q;
        vector<pair<int,TreeNode*>>v(101);
        q.push(root);
        v[root->val]={0,nullptr};
        
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            if(it->left)
            {
                v[it->left->val]={1+v[it->val].first,it};
                q.push(it->left);
            }
             if(it->right)
            {
                v[it->right->val]={1+v[it->val].first,it};
                 q.push(it->right);
            }
        }
            // cout<<"----------------\n";
        // cout<<v[x].first<<" "<<v[x].second->val<<endl;
        // cout<<v[y].first<<" "<<v[y].second->val<<endl;
        if(v[x].first==v[y].first and v[x].second!=v[y].second)
        {
            return true;
        }
        return false;
    }
};