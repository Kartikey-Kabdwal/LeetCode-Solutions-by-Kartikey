class Solution {
public:

bool findsoln(TreeNode* root , long max , long min){
    
    
    if(root==NULL){
        return true;
    }
    
    // Condition of Binary Search Tree 
    // left side node values of the root should be less value than the root and right side should be greater
    // If that is true check recursivley for the root child's
    if((root->val<max) && (root->val>min)){
        
        return findsoln(root->left , root->val , min) && findsoln(root->right , max , root->val);
        
    }
    //if this root node violates the min/max constraint
    else{
        return false;
    }  
}

bool isValidBST(TreeNode* root) {
    
    bool ans = findsoln(root , LONG_MAX , LONG_MIN);
    return ans;
    
}
};

