/*
 * @lc app=leetcode id=199 lang=cpp
 *
 * [199] Binary Tree Right Side View
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
    vector<int> rightSideView(TreeNode* root) {
        if(!root)
            return {};
        queue<TreeNode*> q;

        q.push(root);
        vector<int> vec;

        while(!q.empty()){
            int size = q.size();

            for(int i=0; i<size; i++){
                TreeNode* x = q.front();
                if(i == size-1)
                    vec.push_back(x->val);
                q.pop();


                if(x->left)
                    q.push(x->left);
                if(x->right)
                    q.push(x->right);
            }

        }

        return vec;

    }
};
// @lc code=end

