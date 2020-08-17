#include<bits/stdc++.h>
int evalTree(node* root) {
    
    if(root==NULL)
    return 0;
    
    if(root->left==NULL && root->right==NULL)
    return stoi(root->data);
    
    if(root->left==NULL)
    {
        if(root->data=="-")
        return -evalTree(root->right);
         if(root->data=="*")
        return  evalTree(root->right);
         if(root->data=="+")
        return  evalTree(root->right);
         if(root->data=="/")
        return  evalTree(root->right);
    }
    if(root->right==NULL)
    {
        if(root->data=="-")
        return -evalTree(root->right);
         if(root->data=="*")
        return evalTree(root->right);
         if(root->data=="+")
        return evalTree(root->right);
         if(root->data=="/")
        return evalTree(root->right);
    }
    
    if(root->data=="-")
    return evalTree(root->left)-evalTree(root->right);
     if(root->data=="*")
    return evalTree(root->left)*evalTree(root->right);
     if(root->data=="+")
    return evalTree(root->left)+evalTree(root->right);
     if(root->data=="/")
    return evalTree(root->left)/evalTree(root->right);
}
