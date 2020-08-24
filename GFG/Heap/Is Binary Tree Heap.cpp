bool isHeap(Node * tree)
{
   if(tree==NULL)
   return true;
   
   if(tree->left==NULL && tree->right==NULL)
   return true;
   
   if(tree->left==NULL)
   return tree->data >= tree->right->data;
   
   if(tree->right==NULL)
   return tree->data>= tree->left->data;
   
   return (tree->data>= tree->left->data) && (tree->data>= tree->right->data) && isHeap(tree->left) && isHeap(tree->right);
}
