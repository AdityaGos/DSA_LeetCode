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
  int maxi=0;
     int d(TreeNode * root, int &maxi)
    {
        if(root==NULL){ return 0;}
        else
        {
            int lh=d(root->left,maxi);           
           int  rh=d(root->right,maxi);
            maxi=max(maxi,lh+rh);
            return 1+max(lh,rh);

        }
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        d(root,maxi);
        return maxi;
    }
   
   
};