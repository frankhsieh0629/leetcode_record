/*
 * @lc app=leetcode id=344 lang=c
 *
 * [344] Reverse String
 */

// @lc code=start


void reverseString(char* s, int sSize){
    
    char c;
    for(int i=0; i<sSize/2; i++){
        c = s[sSize-1-i];
        s[sSize-1-i] = s[i];
        s[i] = c;
    }

}
// @lc code=end

