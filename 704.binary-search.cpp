/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == target)
                return i;
        }

        return -1;
    }
};
// @lc code=end

