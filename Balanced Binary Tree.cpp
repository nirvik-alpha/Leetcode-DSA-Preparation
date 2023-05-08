
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return dfsheight(root)!=-1;
    }

    int dfsheight(TreeNode* root)
    {
        if(root==NULL)
        return 0;

        int left = dfsheight(root->left);
        if(left==-1) return -1;
        int right = dfsheight(root->right);
        if(right==-1) return -1;

        if(abs(left-right)>1)
        return -1;

        return 1+max(left,right);

    }



};