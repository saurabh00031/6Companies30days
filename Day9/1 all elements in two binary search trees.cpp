
class Solution 
{
    
    
public:
    
     vector<int>v;
    
    int pre_order(TreeNode *root)
    {
        if(root==NULL)
        {
            return 1;
        }
        
        v.push_back(root->val);
        pre_order(root->left);
        pre_order(root->right);
        
        return 1;
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2)
    {
        
      
        
        if((root1==NULL)&&(root2==NULL))
        {
            return v;
        }
        
        pre_order(root1);
        pre_order(root2);
        
        sort(v.begin(),v.end());
        return v;
        
        
    }
};