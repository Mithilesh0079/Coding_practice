bool isSumTree(Node* root)
{
    if(root->left==NULL && root->right==NULL)
    return true;
    if(root->left==NULL)
    return (root->data==root->right->data) && isSumTree(root->right);
    if(root->right==NULL)
    return (root->data==root->left->data) && isSumTree(root->left);
    
    return (root->data==root->left->data+ root->right->data) && (isSumTree(root->left) && isSumTree(root->right));
}
int isSumProperty(Node *root)
{
   if(isSumTree(root))
   return 1;
   
   return 0;
}
