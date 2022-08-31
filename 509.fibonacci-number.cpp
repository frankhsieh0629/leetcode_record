/*
 * @lc app=leetcode id=509 lang=cpp
 *
 * [509] Fibonacci Number
 */

// @lc code=start
class Solution {
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }

        if(n==1)
            return 1;

        int ans=0;

        if(n>1){
            ans = fib(n-1)+fib(n-2);
        }

        return ans;
    }
};
// @lc code=end

