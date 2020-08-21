void fun(TreeNode* root, int sum, bool &flag)
{
    
    if(root)
    {
        if(root->left==NULL && root->right==NULL)
        {
            if(sum==root->val)
                flag= true;
        }
        fun(root->left, sum-root->val, flag);
        
        fun(root->right, sum-root->val, flag);
        
    }
    return;
}
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        
        bool flag=false;
        fun(root, sum, flag);
        
        return flag;
        
    }
};
