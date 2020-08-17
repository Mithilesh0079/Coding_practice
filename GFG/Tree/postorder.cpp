vector<int> post(Node* root, vector<int> *v)
{
    if(root==NULL)
    return {-1};
    post(root->left, v);
    post(root->right, v);
    (*v).push_back(root->data);
    return *v;
}

vector <int> postOrder(Node* root)
{
   vector<int> v;
   return post(root, &v);
  
}
