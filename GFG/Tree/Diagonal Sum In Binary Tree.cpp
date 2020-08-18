vector <int> diagonalSum(Node* root) {
         
         queue<Node*> q;
         q.push(root);
         q.push(NULL);
         
         vector<int> v;
         int sum=0;
         while(!q.empty())
         {
             Node* temp= q.front();
             q.pop();
             if(temp==NULL)
             {
                 v.push_back(sum);
                 sum=0;
                 
                 if(q.empty())
                 break;
                 q.push(NULL);
                 
             }
             else
             {
                 while(temp!= NULL)
                 {
                     sum+=temp->data;
                     
                     if(temp->left)
                     q.push(temp->left);
                     
                     temp= temp->right;
                 }
             }
         }
         //cout<<endl;
         return v;
}
