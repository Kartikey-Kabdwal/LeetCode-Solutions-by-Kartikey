class Solution {
public:
    
    vector<TreeNode*>nodePath(TreeNode* root,TreeNode*target){
        
        if(root == NULL)
            return {};
    
        if(root->val ==target->val)
            return {root};
        
        vector<TreeNode*>ans;
        
        ans = nodePath(root->left,target);
        
        if(ans.size()>0){
            ans.push_back(root);
            return ans ;
        }
        
        ans = nodePath(root->right,target);
        
        if(ans.size()>0){
            ans.push_back(root);
            return ans;
        }
        
        return {};
        
    }
    
    vector<int>ans;
    
    void findDown(TreeNode* root,int k,int level){
        
        if(root == NULL)
            return;
        
        if(k==level){
            ans.push_back(root->val);
            return;
        }
        
        findDown(root->left,k,level+1);
        findDown(root->right,k,level+1);
        
    }
    
    void findNodes(TreeNode* root,int level,int k, TreeNode* danger){
        
        if(root == NULL)
            return ;
        
        if(root == danger)
            return ;
        
        if(level == k){
            ans.push_back(root->val);
            return;
        }
        
        findNodes(root->left,level+1,k,danger);
        findNodes(root->right,level+1,k,danger);
        
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        
        vector<TreeNode*>path = nodePath(root,target);
        
        findDown(path[0],k,0);
        
        for(int ctr = 1 ; ctr < path.size();ctr++){
            findNodes(path[ctr],0,k-ctr,path[ctr-1]);
        }
        
        return ans ;
        
    }
};