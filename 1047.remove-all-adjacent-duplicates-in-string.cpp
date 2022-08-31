/*
 * @lc app=leetcode id=1047 lang=cpp
 *
 * [1047] Remove All Adjacent Duplicates In String
 */

// @lc code=start
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;

        for(int i=0; i<s.length(); i++){
            if(st.empty() || s[i] != st.top()){
                st.push(s[i]);
            }
            else
                st.pop();
        }

        char *ns  = (char*)malloc(sizeof(char)*st.size());
        memset(ns, '0', st.size());

        int len = st.size();
        for(int i=st.size()-1; i>=0; i--){
            ns[i] = st.top();
            st.pop();
        }

        string ks = "";
        for(int i=0; i<len; i++){
            ks += ns[i];
        }

        return ks;
    }
};
// @lc code=end

