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
    
    int dfs(TreeNode* root,int ancMax,int ancMin){
        if(root==NULL){
            return ancMax-ancMin;
        }
        ancMax=max(ancMax,root->val);
        ancMin=min(ancMin,root->val);
        int leftDiff=dfs(root->left,ancMax,ancMin);
        int rightDiff=dfs(root->right,ancMax,ancMin);
        return max(leftDiff,rightDiff);
    }
    int maxAncestorDiff(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        return dfs(root,root->val,root->val);
    }
};