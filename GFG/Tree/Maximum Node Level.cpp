int maxNodeLevel(Node *root)
{
  queue<Node*> q;
  int mw=0,w=0;
  q.push(root);
  q.push(NULL);
  int level=0,max_l=0;
  while(q.size()>1)
  {
     Node* top= q.front();
     if(top==NULL)
     {
         if(w>mw)
         {
             mw=w;
             max_l= level;
         }
         w=0;
         q.pop();
         q.push(NULL);
         level++;
         continue;
     }
     q.pop();
     w++;
     if(top->left)
     q.push(top->left);
     if(top->right)
     q.push(top->right);
  }
  if(w>mw)
     max_l= level;
     
  return max_l;
}
