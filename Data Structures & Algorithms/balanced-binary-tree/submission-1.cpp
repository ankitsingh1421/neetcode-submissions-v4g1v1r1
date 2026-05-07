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

      int maxHeight(TreeNode* root){
        if(!root){
            return 0;
        }
        int lh = maxHeight(root->left);
        int rh = maxHeight(root->right);

        return 1 + max(lh,rh);
      }
    bool isBalanced(TreeNode* root) {
        if(!root){
            return true;
        }
        int lt = maxHeight(root->left);
        int rt = maxHeight(root->right);

  
      if(abs(lt - rt) > 1) return false;

         return isBalanced(root->left) && isBalanced(root->right);
    }
};
