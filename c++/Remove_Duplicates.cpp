#include <vector>
#include <algorithm> 

class Solution 
{
    public:
        int removeDuplicates(std::vector<int>& nums) 
        {
            nums.erase( std::unique( nums.begin(), nums.end() ), nums.end() );
            return (nums.size());
        }   
};

/*
    Problem from leetcode
    ---------------------
    Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.
    
    Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
*/