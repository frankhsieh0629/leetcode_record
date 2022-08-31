/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */

// @lc code=start
class Solution {
public:
    void reverseString(vector<char>& s) {
        char tmp;
        for(int i=0, j=s.size()-1; i<s.size(); i++, j--){
            if(i>j)
                break;

            tmp = s[j];
            s[j] = s[i];
            s[i] = tmp;
        }
    }
};
// @lc code=end

