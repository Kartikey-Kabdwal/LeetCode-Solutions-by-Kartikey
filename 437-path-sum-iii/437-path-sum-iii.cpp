class Solution {
public:
    
    int count;
    
    void dfs(TreeNode* root, long long curr_sum, long long targetSum){
        if(root == NULL){
            return;
        }
        curr_sum += root->val;
        if(curr_sum == targetSum){
            count++;
        }
        dfs(root->left, curr_sum, targetSum);
        dfs(root->right, curr_sum, targetSum);
    }
    
    void rec(TreeNode* root, long long targetSum){
        if(root == NULL){
            return;
        }
        dfs(root, 0, targetSum);
        rec(root->left, targetSum);
        rec(root->right, targetSum);
    }
    
    int pathSum(TreeNode* root, int targetSum) {
        count = 0;
        rec(root, targetSum);
        return count;
    }
};
