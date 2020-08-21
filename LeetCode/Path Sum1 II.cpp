void fun(TreeNode* root, int sum, unordered_map <TreeNode*, TreeNode*> &parent, vector<vector<int>> &out)
{
    if(root)
    {
        if(root->left==NULL && root->right==NULL)
        {
        
            if(root->val==sum)
            {
                vector<int> v;
                while(root)
                {
                    v.push_back(root->val);
                    root= parent[root];
                }
                reverse(v.begin(), v.end());
                out.push_back(v);
            }
               return; 
        }
        if(root->left)
        parent[root->left]= root;
        if(root->right)
        parent[root->right]= root;
        
        fun(root->left, sum- root->val, parent, out);
        fun(root->right, sum-root->val, parent, out);
    }
    return;
}
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        
        unordered_map <TreeNode*, TreeNode*> parent;
        parent[root]= NULL;
        vector<vector<int>> res;
        
        fun(root,sum,parent, res);
        
        return res;
        
    }
};
