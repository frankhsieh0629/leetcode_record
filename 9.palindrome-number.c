/*
 * @lc app=leetcode id=9 lang=c
 *
 * [9] Palindrome Number
 */

// @lc code=start


bool isPalindrome(int x){
    if(x<0)
        return false;
    
    long int temp=x;
    long int y=0;

    while(temp>0){
        y = y*10+ (temp%10);
        temp = temp/10;
    }

    if(x-y == 0)
        return true;
    else
        return false;

}
// @lc code=end

