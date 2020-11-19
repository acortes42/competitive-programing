#include <vector>
#include <map>

class Solution 
{
    public:
        int singleNumber(std::vector<int>& nums) 
        {
            int len_nums;
            int sum1;
            int sum2;
            std::map<int, int> m;

            len_nums = nums.size();
            sum1 = 0;
            sum2  =0;
            for (int i = 0; i < len_nums; i++)
            {
                if (m[nums[i]] == 0)
                {
                    sum1 += nums[i];
                    m[nums[i]]++;
                }
                sum2 += nums[i];
            }
            return (2 * sum1 - sum2);
        }
};

/*
    Problem from leetcode
    ---------------------

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

Follow up: Could you implement a solution with a linear runtime complexity and without using extra memory?

 

Example 1:

Input: nums = [2,2,1]
Output: 1
*/