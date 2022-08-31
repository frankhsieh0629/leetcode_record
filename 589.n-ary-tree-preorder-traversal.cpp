/*
 * @lc app=leetcode id=589 lang=cpp
 *
 * [589] N-ary Tree Preorder Traversal
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
    void traversal(Node* root, vector<int>&vec){
        if(!root)
            return;

        vec.push_back(root->val);
        for(int i=0; i<root->children.size(); i++){
            traversal(root->children[i], vec);
        }
    }

    vector<int> preorder(Node* root) {
        if(!root)
            return {};

        vector<int> vec;

        traversal(root, vec);

        return vec;
    }
};
// @lc code=end

