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
   bool identical(TreeNode* p,TreeNode* q){
       
     if(p==nullptr&&q!=nullptr) return false;
        if(p!=nullptr&&q==nullptr) return false;
        if(p==nullptr&&q==nullptr) return true;
        
        if(p->val!=q->val) return false;

        bool left=identical(p->left,q->left);
        bool right=identical(p->right,q->right);




        if(!(left&&right)) return false;

        return true; 
        
        



   }



    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!subRoot) return true;
        if(!root) return false;

        if(identical(root,subRoot)){

            return true;
        }

        return isSubtree(root->right,subRoot)||isSubtree(root->left,subRoot);
         





    }
};
