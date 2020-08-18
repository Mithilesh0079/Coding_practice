bool isSymmetric(struct Node* root)
{
    if(root==NULL)
    return true;
	queue<Node*> Q;
	Q.push(root->left);
	Q.push(root->right);
	while(!Q.empty())
	{
	    Node* left= Q.front();
	    Q.pop();
	    Node* right= Q.front();
	    Q.pop();
	    
	    if(left==NULL && right==NULL)
	    continue;
	    
	    if((left==NULL && right!=NULL)||(left!=NULL && right==NULL))
	    return false;
	    if(left->data!= right->data)
	    return false;
	    
        Q.push(left->left);
        Q.push(right->right);
        Q.push(left->right);
        Q.push(right->left);
	    
	}
	return true;
}
