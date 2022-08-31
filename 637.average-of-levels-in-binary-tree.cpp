/*
 * @lc app=leetcode id=637 lang=cpp
 *
 * [637] Average of Levels in Binary Tree
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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<double> vec;
        while(!q.empty()){
            int size = q.size();
            double sum=0;


            for(int i=0; i<size; i++){
                TreeNode* x = q.front();
                q.pop();
                sum += x->val;

                if(x->left)
                    q.push(x->left);
                if(x->right)
                    q.push(x->right);
            }

            vec.push_back(sum/size);
        }

        return vec;
    }
};
// @lc code=end

