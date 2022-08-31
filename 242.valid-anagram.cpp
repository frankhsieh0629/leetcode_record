/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        int record[26] = {0};

        for(int i=0; i<s.length(); i++){
            record[s[i] - 'a']++;
        }

        for(int j=0; j<t.length(); j++){
            record[t[j] - 'a']--;
        }

        for(int i=0; i<26; i++){
            if(record[i] != 0){
                return false;
            }
        }

        return true;

    }
};
// @lc code=end

