
class Solution {
public:

    void preorder(TreeNode* nod,vector<int>&ans)
    {
        if(nod== NULL)
        return ;

        ans.push_back(nod->val);
        preorder(nod->left,ans);
        preorder(nod->right,ans);

    }

    vector<int> preorderTraversal(TreeNode* root) {

        vector<int>ans;

        preorder(root,ans);
        return ans;
    }
};