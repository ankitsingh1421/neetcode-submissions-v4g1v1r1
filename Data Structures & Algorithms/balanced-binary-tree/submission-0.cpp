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
        int maxheight(TreeNode* root){
            if(!root) return 0;
            int lefth = maxheight(root->left);
            int righth = maxheight(root->right);

            return 1 + max(lefth , righth);
        }

    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int leftt = maxheight(root->left);
        int rightt = maxheight(root->right);
  
       if(abs(leftt - rightt)>1) return false;

       return isBalanced(root->left) && isBalanced(root->right);
        
    }
};
