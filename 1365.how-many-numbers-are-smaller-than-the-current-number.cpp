/*
 * @lc app=leetcode id=1365 lang=cpp
 *
 * [1365] How Many Numbers Are Smaller Than the Current Number
 */

// @lc code=start
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
		vector<int>data;

        int count = 0;

        for(int i=0; i<nums.size(); i++){
            count = 0;
            for(int j=0; j<nums.size(); j++){
                if(i==j)
                    continue;
                if(nums[i]>nums[j]){
                    count++;
                }
            }

            data.push_back(count);
        }

        return data;
    }
};
// @lc code=end

