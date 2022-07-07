bool searchInBST(BinaryTreeNode<int> *root, int x) {
   if(root->data==x){
       return true;
   }
    if(root==NULL){
        return false;
    }
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while(!q.empty()){
        BinaryTreeNode<int> * curr = q.front();
        q.pop();
        if(curr->data==x){
            return true;
        }
        if(curr->left!=NULL){
           q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
    return false;
}