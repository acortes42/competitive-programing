#include <string>
#include <bits/stdc++.h>
#include <iostream>

class Solution
{
public:
    bool isPalindrome(int x)
    {
        std::string s;
        std::ostringstream convert;

        convert << x;
        s = convert.str();
        std::string s2 = s;
        reverse(s.begin(), s.end());

        if (x < 0)
            return (false);
        return (s == s2);
    }
};