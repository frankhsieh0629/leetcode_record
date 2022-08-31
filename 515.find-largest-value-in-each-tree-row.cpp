/*
 * @lc app=leetcode id=515 lang=cpp
 *
 * [515] Find Largest Value in Each Tree Row
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
    vector<int> largestValues(TreeNode* root) {

        if(!root)
            return {};


        queue<TreeNode*> q;
        q.push(root);
        vector<int> vec;

        while(!q.empty()){
            int size = q.size();
            int max = INT_MIN;
            for(int i=0; i<size; i++){
                TreeNode* x = q.front();
                if(x->val > max)
                    max = x->val;
                q.pop();

                if(x->left)
                    q.push(x->left);
                if(x->right)
                    q.push(x->right);
            }

            vec.push_back(max);
        }

        return vec;
    }
};
// @lc code=end

