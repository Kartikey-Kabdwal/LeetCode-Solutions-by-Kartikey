
class Solution {
public:
    int count = 0;
    int search(TreeNode* root) {
       if(!root)return 1;
        int  a = search(root->left);
        int  b = search(root->right);
        
        if(a==0 || b==0){
            count++;
            return 2;}
        if(a==1 && b == 1)return 0;
        return 1;
    }
    int minCameraCover(TreeNode* root){
        int x = search(root);
        if(x==0)return count+1; 
        return count;
    }

};