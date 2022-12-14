/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i=0; i<s.size(); i++){
            if(s[i] == '(')
                st.push(')');
            else if(s[i] == '[')
                st.push(']');
            else if(s[i] == '{')
                st.push('}');
            else if (st.empty())
                return false;
            else if(st.top() != s[i])
                return false;
            else if(s[i] == st.top())
                st.pop();
        }

        return st.empty();

    }
};
// @lc code=end

