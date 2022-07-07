vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    vector<int> v;
    if(root==NULL){
        return v;
    }
    bool reverse = false;
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    stack<int> s;
    while(!q.empty()){
        int count = q.size();
        for(int i = 0 ;i<count;i++){
            BinaryTreeNode<int> *curr = q.front();
            q.pop();
            if(reverse){
                s.push(curr->data);
            }
            else{
                v.push_back(curr->data);
            }
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                if(curr->right!=NULL){
                    q.push(curr->right);
                }
            
        }
        if(reverse){
        while(!s.empty()){
            v.push_back(s.top());
            s.pop();
        }
        }
        
         reverse = !reverse;
    }
    return v;
}