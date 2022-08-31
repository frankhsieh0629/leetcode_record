/*
 * @lc app=leetcode id=150 lang=cpp
 *
 * [150] Evaluate Reverse Polish Notation
 */

// @lc code=start
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;

        for(int i=0; i<tokens.size(); i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                int s = st.top();
                st.pop();
                int m = st.top();
                st.pop();

                if(tokens[i] == "+")
                    st.push(m+s);
                else if(tokens[i] == "-")
                    st.push(m-s);
                else if(tokens[i] == "*")
                    st.push(m*s);
                else if(tokens[i] == "/")
                    st.push(m/s);
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }

        int ans = st.top();
        return ans;
    }
};
// @lc code=end

