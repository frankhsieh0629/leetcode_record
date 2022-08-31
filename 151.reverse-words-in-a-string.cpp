/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
class Solution {
public:

    string string_reverse(string s){
        for(int i=0, j=s.size()-1; i<s.size(); i++, j--){
            if(i>j)
                break;
            char tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;
        }

        return s;
    }

    string reverseWords(string s) {
        while(s[0] == ' '){
            s.erase(s.begin());
        }

        while(s[s.size()-1] == ' '){
            s.erase(s.begin()+s.size()-1);
        }

        for(int i=0; i<s.size(); i++){
            if(s[i] == ' ' && s[i+1] == ' '){
                s.erase(s.begin()+i+1);
                // cout << s << endl;
                i--;
            }

        }


        s = string_reverse(s);

        // cout << s << endl;

        int s_start = 0;
        int s_end = 0;

        for(int i=0; i<=s.size(); i++){
            if(s[i] == ' ' || (i==s.size())){
                for(int j=i-1; s_start<i; s_start++, j--){
                    if(s_start>j)
                        break;
                    char temp = s[s_start];
                    s[s_start] = s[j];
                    s[j] = temp;
                }
                s_start = i+1;
            }
        }

        return s;
    }
};
// @lc code=end

