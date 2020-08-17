vector<int> levelOrder(Node* node)
{
  vector<int> v;
  //v.push_back(root->data);
  queue<Node*> Q;
  Q.push(node);
  while(!Q.empty())
  {
      Node* root= Q.front();
      v.push_back(root->data);
      Q.pop();
      if(root->left!=NULL)
      Q.push(root->left);
      
      if(root->right!= NULL)
      Q.push(root->right);
  }
  
  return v;
}
