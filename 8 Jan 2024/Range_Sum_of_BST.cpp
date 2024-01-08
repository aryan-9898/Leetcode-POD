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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL){
            return 0;
        }
        
        //within range hai value toh add krdo
        if(root->val >=low && root->val<=high){
            return root->val +rangeSumBST(root->left,low,high) + rangeSumBST(root->right,low,high);
        }
        
        //root ka value kam hai(bekar m hi jaare ho left, So, go to right)
        if(root->val <low){
            return rangeSumBST(root->right,low,high);
        }
        
        //root ka value jyada hai(bekar m hi jaare ho right, So, go to left)  condition likho ya nhi ek hi baat h kyuki y hi bachra ab
        return rangeSumBST(root->left,low,high);
        
        
    }
};
