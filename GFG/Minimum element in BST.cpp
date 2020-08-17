int minValue(Node* root)
{
    if(root==NULL)
    return -1;
    
    if(root->left== NULL && root->right==NULL)
    return root->data;
    
    if(root->left==NULL)
    return min(root->data, minValue(root->right));
    
    if(root->right==NULL)
    return min(root->data, minValue(root->left));
    
   return min(root->data,min(minValue(root->left), minValue(root->right)));
}
