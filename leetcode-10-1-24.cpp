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
     unordered_map<int,vector<int>>g;
     void constructGraph(TreeNode*root){
         if(root==NULL){
             return;
         }
         if(root->left){
             g[root->val].push_back(root->left->val);
             g[root->left->val].push_back(root->val);
         }
         if(root->right){
             g[root->val].push_back(root->right->val);
             g[root->right->val].push_back(root->val);
         }
         constructGraph(root->left);
         constructGraph(root->right);
     }
    int amountOfTime(TreeNode* root, int start) {
        constructGraph(root);
        queue<int>q;
        q.push(start);
        unordered_set<int>vis;
        int count=-1;
        while(!q.empty()){
            count++;
            for(int i=q.size();i>0;i--){
                int curr=q.front();
                q.pop();
                vis.insert(curr);
                for(int adj:g[curr]){
                    if(!vis.count(adj)){
                        q.push(adj);
                    }
                }
            }
        }
        return count;
    }
};