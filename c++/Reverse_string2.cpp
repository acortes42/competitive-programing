#include <bits/stdc++.h>
#include <string>

class Solution 
{
public:
    string reverseStr(string s, int k) 
    {
        int x;
        int len_s;
        
        len_s = s.length();
        x = 0;
        while (x < len_s)
        {
            if ((x + k) < len_s)
                std::reverse(s.begin() + x, s.begin() + (x + k));
            else
                std::reverse(s.begin() + x, s.end());
            x += k *2;
        }
        return (s);
    }
};

/*
    Problem from leetcode
    ---------------------

Given a string and an integer k, you need to reverse the first k characters for every 2k characters 
counting from the start of the string. If there are less than k characters left, reverse all of them. 

If there are less than 2k but greater than or equal to k characters, then reverse the first k 
characters and left the other as original.

Example:
Input: s = "abcdefg", k = 2
Output: "bacdfeg"

*/