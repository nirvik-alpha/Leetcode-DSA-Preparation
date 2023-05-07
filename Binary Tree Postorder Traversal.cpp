
class Solution {
public:


void PostOrder(TreeNode* root,vector<int>&ans)
{
    if(root==0)
    return ;
    
    PostOrder(root->left,ans);
    PostOrder(root->right,ans);
    ans.push_back(root->val);
}


    vector<int> postorderTraversal(TreeNode* root) {
        
    vector<int>ans;
    PostOrder(root,ans);
    return ans;


    }
};