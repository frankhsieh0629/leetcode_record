/*
 * @lc app=leetcode id=101 lang=cpp
 *
 * [101] Symmetric Tree
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
    vector<vector<int>> levelorder(TreeNode* root){
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int> vec;

            for(int i=0; i<size; i++){
                TreeNode* x = q.front();
                vec.push_back(x->val);
                q.pop();

                if(x->left)
                    q.push(x->left);
                if(x->right)
                    q.push(x->right);
            }

            ans.push_back(vec);
        }

        return ans;
    }

    bool isSymmetric(TreeNode* root) {
        vector<vector<int>> ans = levelorder(root);

        for(int i=0; i<ans.size(); i++){
            int y = ans[i].size()-1;
            for(int j=0; j<ans[i].size(); j++){
                if(j > ans[i].size()/2)
                    break;
                cout << " " << ans[i][j] << " " << ans[i][jy] << endl;
                if(ans[i][j] != ans[i][y])
                    return false;

                y--;
            }
        }

        return true;
    }
};
// @lc code=end

