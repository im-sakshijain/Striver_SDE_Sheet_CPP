bool findPath(TreeNode<int> *root,vector<TreeNode<int> *> &p,int n){
    if(root==NULL){
        return false;
    }
    p.push_back(root);
    if(root->data==n){
        return true;
    }
    if(findPath(root->left,p,n)||findPath(root->right,p,n)){
        return true;
    }
    p.pop_back();
    
    return false;
}
int lowestCommonAncestor(TreeNode<int> *root, int x, int y)
{   
    vector<TreeNode<int> *> p1,p2;
	if(findPath(root,p1,x)==false||findPath(root,p2,y)==false){
        return 0;
    }
    int i;
    for(i = 0;i<p1.size()-1 && i<p2.size()-1;i++){
        if(p1[i+1]!=p2[i+1]){
           break;
        }
    }
    return p1[i]->data;
}