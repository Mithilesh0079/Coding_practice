int sumt(Node* root)
{
    if(root==NULL)
    return 0;
  queue<Node*> Q;
  Q.push(root);
  int s=0;
  while(!Q.empty())
  {
      Node* top= Q.front();
      s+= top->data;
      Q.pop();
      
      if(top->left)
      Q.push(top->left);
      if(top->right)
      Q.push(top->right);
  }
  return s;
}


bool isSumTree(Node* root)
{
    if(root->left==NULL && root->right==NULL)
    return true;
    if(root->left==NULL)
    return (root->data==sumt(root->right)) && isSumTree(root->right);
    if(root->right==NULL)
    return (root->data==sumt(root->left)) && isSumTree(root->left);
    
    return (root->data==sumt(root->left)+ sumt(root->right)) && (isSumTree(root->left) && isSumTree(root->right));
}
