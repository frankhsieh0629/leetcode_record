/*
 * @lc app=leetcode id=429 lang=cpp
 *
 * [429] N-ary Tree Level Order Traversal
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root)
            return {};

        queue<Node*> q;
        vector<vector<int>> ans;
        q.push(root);

        while(!q.empty()){
            int size = q.size();
            vector<int> vec;

            for(int i=0; i<size; i++){
                Node* x = q.front();
                vec.push_back(x->val);
                q.pop();

                for(int i=0; i<x->children.size(); i++){
                    if(x->children[i])
                        q.push(x->children[i]);
                }
            }

            ans.push_back(vec);
        }

        return ans;
    }
};
// @lc code=end

