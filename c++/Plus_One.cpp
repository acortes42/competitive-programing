#include <vector>

class Solution 
{
public:
    std::vector<int> plusOne(std::vector<int>& digits) 
    {
        int x;
        int flag;

        x = digits.size() - 1;
        flag = 0;
        
        if (x == 0)
            digits[0] += 1;
        while (x > 0)
        {
            if (digits[x] == 9 && flag == 1)
                break;
            else if (digits[x] >= 9)
            {
                digits[x] = 0;
                digits[x - 1]++;
                flag = 1;
            }
            else
            {
                if (flag == 0)
                    digits[x]++;
                break;
            }
            x--;
        }
        if (digits[0] > 9)
        {
            digits[0] = 0;
            digits.insert(digits.begin(), 1);
        }
        return (digits);
    }
};

/*
    Problem from leetcode
    ---------------------

Given a non-empty array of decimal digits representing a non-negative integer, increment one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and each element in the array contains a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself.

 

Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.

Example 2:

Input: digits = [9,9,9]
Output: [1,0,0,0]
Explanation: The array represents the integer 999.
*/