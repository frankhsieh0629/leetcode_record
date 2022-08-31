/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        int slow_index = 0;

        for(int fast_index=0; fast_index<size; fast_index++){
            if(nums[fast_index] != nums[slow_index]){
                nums[++slow_index] = nums[fast_index];
            }
        }

        return slow_index+1;
    }
};
// @lc code=end

