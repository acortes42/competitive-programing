#include <vector>

class Solution 
{
    public:
        int maxProfit(std::vector<int>& prices) 
        {
            int total;

            total = 0;
            if (prices.size() > 1)
            {
                int actual_value;
                int i;

                i = 1;
                actual_value = prices[0];
                while (i < prices.size())
                {
                    if (actual_value < prices[i])
                    {
                        total += prices[i] - actual_value;
                        actual_value = prices[i];
                    }
                    else
                        actual_value = prices[i];
                    i++;
                }
            }
            else
                return (0);
            return (total);
        }
};

/*
    Problem from leetcode
    ---------------------

Say you have an array prices for which the ith element is the price of a given stock on day i.

Design an algorithm to find the maximum profit. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times).

Note: You may not engage in multiple transactions at the same time (i.e., you must sell the stock before you buy again).

Example 1:

Input: [7,1,5,3,6,4]
Output: 7
Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
             Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
*/