#include <vector>

class Solution 
{
    public:
        void moveZeroes(std::vector<int>& nums) 
        {
            int x;
            int i;
            int flag;
            
            i = 0;
            flag = 0;
            x = nums.size();
            while (i < x)
            {
                if (nums[i] == 0)
                {
                    nums.erase(nums.begin() + i);
                    nums.push_back(0);
                    if (x == flag++ + i)
                        break;
                    continue;
                }
                i++;
            }
        }
};