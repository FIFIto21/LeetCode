/*
    - Problem
        Given an array of integers nums and an integer target, 
        return indices of the two numbers such that they add up to target.

        You may assume that each input would have exactly one solution, 
        and you may not use the same element twice.

        You can return the answer in any order.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++){ // loop through the nums
            for (int j = i+1; j < nums.size(); j++){ // second loop starting one position ahead of the lopp before
                if ((nums[i] + nums[j]) == target) // check if the sum is equals to the target, and if so, return the two positions
                    return {i,j}; 
            }
        }      
        return {};
    }
};