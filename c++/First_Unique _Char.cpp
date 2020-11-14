#include <string>

class Solution 
{
public:
    int firstUniqChar(std::string s) 
    {
        int chars[26];
        int len_s;
        int flag;
        
        len_s = s.length();
        flag = 0;
        for (int i = 0; i < 26; i++)
            chars[i] = 0;
        for (int i = 0; i < len_s; i++)
        {
            flag = 0;
            if (chars[s[i] - 97] == 0)
            {
                for(int j = i + 1; j < len_s; j++)
                {
                    if (s[i] == s[j])
                        flag++;
                }
                if (flag == 0 || i == len_s - 1)
                    return (i);
                chars[s[i] - 97] = 1;
            }
        }
        return (-1);
    }
};

/*
    Problem from leetcode
    ---------------------
    
Given a string, find the first non-repeating character in it and return its index. If it doesn't exist, return -1.

Examples:

s = "leetcode"
return 0.

s = "loveleetcode"
return 2.
*/