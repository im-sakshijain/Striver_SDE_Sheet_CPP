int height(TreeNode* root,int &res){
        if(root==NULL){
            return 0;
        }
        int lh=height(root->left,res);
        int rh = height(root->right,res);
        res = max(res,lh+rh);
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        height(root,res);
        return res;
    }