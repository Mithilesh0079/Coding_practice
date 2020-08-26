void invert(TreeNode* root)
{
    // exit(0);
       if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL)
            return;
         
        else if(root->left==NULL)
        {
           
            root->left= root->right;
            root->right=NULL;
            invert(root->left);
             
            return ;
        }
 
        else if (root->right==NULL)
        {
            root->right= root->left;
            root->left= NULL;
            invert(root->right);
            return ;
        }
         
        else
        {
            TreeNode* temp= root->left;
            root->left= root->right;
            root->right= temp;
            invert(root->left);
            invert(root->right);
        }
}
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return root;
        
        invert(root);
        return root;
    }
};
