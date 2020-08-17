#include<unordered_map> 
void levelOrder(Node* node)
{
      queue<Node*> Q;
      Q.push(node);
      unordered_map<Node*, int> height;
      height[node]= 1;
      int current_height=1;
      while(!Q.empty())
      {
          Node* root= Q.front();
          
         
          if(height[root] == current_height)
              cout<<root->data<<" ";
          else
          {
           cout<<"$ "<<root->data<<" ";
           current_height= height[root];
          
           }
          Q.pop();
          
          if(root->left!=NULL)
          {
              Q.push(root->left);
              height[root->left]= height[root]+1;
          }
          if(root->right!= NULL)
          {
              Q.push(root->right);
              height[root->right]= height[root]+1;
          }
      }
      cout<<"$";
}
