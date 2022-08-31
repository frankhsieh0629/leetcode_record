/*
 * @lc app=leetcode id=209 lang=cpp
 *
 * [209] Minimum Size Subarray Sum
 */

// @lc code=start
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = nums.size();
        int sum = 0;
        int count = 0;
        int flag = 0 ;

        for(int i=0; i<nums.size(); i++){
            sum=0;
            count=0;
            for(int j=i; j<nums.size(); j++){
                sum += nums[j];
                count++;
                if(sum >= target){
                    flag = 1;
                    if(count < ans)
                        ans = count;
                    break;
                }
            }

            if(i>target)
                continue;
        }

        if(flag==0)
            return 0;
        return ans;
    }
};
// @lc code=end

