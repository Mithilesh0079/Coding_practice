///// Solution Optimized
void levelOrder(Node* node)
{
      queue<Node*> Q;
      Q.push(node);
      Q.push(NULL);
      while(Q.size()!=1)
      {
          Node* root= Q.front();
          Q.pop();
          if(root!= NULL)
          cout<<root->data<<" ";
          else if(root==NULL)
                 {
              cout<<"$ ";
              Q.push(NULL);
              continue;
          }
          
          if(root->left!=NULL)
          {
              Q.push(root->left);
              
          }
          if(root->right!= NULL)
          {
              Q.push(root->right);
            
          }
      }
      cout<<"$";
}

///simple But Not optimized

/*#include<unordered_map> 
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
}*/

