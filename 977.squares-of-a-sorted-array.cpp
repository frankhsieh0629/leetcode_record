/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> n(nums.size(), 0);

        int index_z = nums.size()-1;
        for(int i=0, j=nums.size()-1; i<=j;){
            if(nums[i]*nums[i] >= nums[j]*nums[j]){
                n[index_z] = nums[i]*nums[i];
                i++;
            }
            else{
                n[index_z] = nums[j]*nums[j];
                j--;
            }
            index_z--;
        }

        return n;
    }

};
// @lc code=end

