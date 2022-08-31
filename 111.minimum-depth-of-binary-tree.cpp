/*
 * @lc app=leetcode id=111 lang=cpp
 *
 * [111] Minimum Depth of Binary Tree
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
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;

        queue<TreeNode*> q;
        q.push(root);
        int min = 0;
        while(!q.empty()){
            int size = q.size();
            min++;
            for(int i=0; i<size; i++){
                TreeNode* x = q.front();
                q.pop();


                if(x->left)
                    q.push(x->left);
                if(x->right)
                    q.push(x->right);
                if(!x->left && !x->right)
                    return min;
            }
        }

        return min;
    }
};
// @lc code=end

