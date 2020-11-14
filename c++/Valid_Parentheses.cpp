#include <vector>
#include <string>
#include <iostream>

class Solution 
{
    public:
        bool isValid(std::string s) 
        {
            std::vector <char> arr;

            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                    arr.push_back(s[i]);
                else if (s[i] == ')')
                {
                    if (arr.size() == 0)
                        return (false);
                    if (arr.back() == '(')
                        arr.pop_back();
                    else
                        return (false);
                }
                else if (s[i] == ']')
                { 
                    if (arr.size() == 0)
                        return (false);
                    if (arr.back() == '[')
                        arr.pop_back();
                    else
                        return (false);
                }
                else if (s[i] == '}')
                {
                    if (arr.size() == 0)
                        return (false);
                    if (arr.back() == '{')
                        arr.pop_back();
                    else
                        return (false);
                }
            }
        if (arr.size() == 0)
            return (true);
        return (false);
        }
};


/*
    Problem from leetcode
    ---------------------

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 
Example 4:

Input: s = "([)]"
Output: false
*/