/*
 * @lc app=leetcode id=226 lang=cpp
 *
 * [226] Invert Binary Tree
 */

// @lc code=start
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
/* recursive */
    // TreeNode* invertTree(TreeNode* root) {
    //     if(!root)
    //         return root;

    //     TreeNode* tmp = root->left;
    //     root->left = root->right;
    //     root->right = tmp;

    //     invertTree(root->left);
    //     invertTree(root->right);

    //     return root;
    // }

/* level order solution */
    TreeNode* invertTree(TreeNode* root) {
        if(!root)
            return root;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int size = q.size();

            for(int i=0; i<size; i++){
                TreeNode* x = q.front();
                q.pop();

                swap(x->left, x->right);

                if(x->left)
                    q.push(x->left);
                if(x->right)
                    q.push(x->right);
            }
        }

        return root;
    }

};





// @lc code=end

