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

    void solve(TreeNode* root,int &count,int mx){
        if(root == NULL) return;
        
        if(root->val >= mx){
            mx = root->val;
            count++;
        }
        solve(root->left,count,mx);
        solve(root->right,count,mx);
    }

    int goodNodes(TreeNode* root) {
        if(root == NULL) return 0;
        int count  = 0;
        int mx = INT_MIN;
       
        solve(root,count,mx);
        return count;

    }
};