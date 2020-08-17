int countLeaves(Node* root)
{
    if(root->right==NULL && root->left==NULL)
    return 1;
    
    if(root->right==NULL)
    return countLeaves(root->left);
    
    if(root->left==NULL)
    return countLeaves(root->right);
    
    return countLeaves(root->left)+ countLeaves(root->right);
}
