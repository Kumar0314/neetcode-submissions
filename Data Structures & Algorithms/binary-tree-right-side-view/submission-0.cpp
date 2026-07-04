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
    
    void helper(TreeNode *root,int level,map<int,int>&mpp){
          
          if(!root) return;
    
          if(mpp.find(level)==mpp.end()){
            mpp[level]=root->val;
          }
           


          if(root->right){
            helper(root->right,level+1,mpp);
          } 

          if(root->left){
            helper(root->left,level+1,mpp);
          } 





    }

    vector<int> rightSideView(TreeNode* root) {
        map<int,int>mpp;
        vector<int>ans;

        helper(root,0,mpp);

        for(auto it:mpp){
            ans.push_back(it.second);
        }


      return ans;
    }
};
