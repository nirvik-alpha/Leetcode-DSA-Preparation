/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans=0;
    TreeNode* convertBST(TreeNode* root) {
        
        if(root==NULL)
        return 0;

        // first will go to right side 
        convertBST(root->right);

        // then get the sum adding the value one by one
        ans+=root->val ;

        // then set the node value as sum 
        root->val = ans ;

        // same way will do it in left 
        convertBST(root->left);

        return root; 
    }
};