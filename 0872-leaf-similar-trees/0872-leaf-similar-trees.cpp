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
    
    void solve(TreeNode* root1,vector<int>&v1){
        if(root1 == NULL) return ;
        if(root1->left == NULL && root1->right == NULL) {
            v1.push_back(root1->val);
        }
         solve(root1->left,v1);
         solve(root1->right,v1);

   
        
    }
     void solve1(TreeNode* root2,vector<int>&v2){
        if(root2 == NULL) return ;
        if(root2->left == NULL && root2->right == NULL) {
            v2.push_back(root2->val);
        }
        solve1(root2->left,v2);
      solve1(root2->right,v2);
    }
 
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1;
        vector<int>v2;
        solve(root1,v1);
        solve1(root2,v2);
        return v1 == v2;
    }
};