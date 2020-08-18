int height(Node* root)
{
    if(root==NULL)
    return 0;
    
    return 1+max(height(root->left), height(root->right));
}
int diameter(Node* root) {
    
    if(root==NULL)
    return 0;
    
   int x=1+height(root->left)+height(root->right);
   int y= diameter(root->left);
   int z= diameter(root->right);
   
   return max(x, max(y,z));
}
