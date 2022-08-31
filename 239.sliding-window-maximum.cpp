/*
 * @lc app=leetcode id=239 lang=cpp
 *
 * [239] Sliding Window Maximum
 */

// @lc code=start
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int max_val = -9999;
        int tmp = 0;
        vector<int>ans;

        for(int i=0; i<nums.size()-k+1; i++){
            tmp = 0;
            max_val = nums[i];
            for(int j=i; j<i+k; j++){
                if(nums[j] > max_val)
                    max_val = nums[j];
            }

            ans.push_back(max_val);
        }

        return ans;

    }
};
// @lc code=end

