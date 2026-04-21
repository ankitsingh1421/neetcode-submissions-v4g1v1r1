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

int dia = 0;
 
 int search(TreeNode* root){
    if(!root){
        return 0;
    }
int lefth = search(root->left);
int righth = search(root->right);
   dia = max(dia,lefth+righth);

   return 1 + max(lefth,righth);
 }

    int diameterOfBinaryTree(TreeNode* root) {
        search(root);
        return dia;
    }
};
