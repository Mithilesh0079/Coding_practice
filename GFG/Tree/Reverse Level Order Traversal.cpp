void reversePrint(Node *root)
{
    if(root==NULL)
    return;
    queue<Node*> Q;
    Q.push(root);
    stack<int> S;
    
    while(!Q.empty())
    {
        Node* node= Q.front();
        S.push(node->data);
        Q.pop();
        
        if(node->right!= NULL)
        Q.push(node->right);
        if(node->left!= NULL)
        Q.push(node->left);
    }
    
    while(!S.empty())
    {
        cout<<S.top()<<" ";
        S.pop();
    }
}
