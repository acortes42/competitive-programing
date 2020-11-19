#include <string>

class Solution 
{
    public:
        bool checkInclusion(std::string s1, std::string s2) 
        {
            int map[26];
            int map2[26];
            int x;
            int i;
            int len_s1;
            int len_s2;
            int len_minus;

            x = 0;
            len_s1 = s1.length();
            len_s2 = s2.length();
            len_minus = len_s2 - len_s1;
            while (x < 26)
                map[x++] = 0;
            x = 0;
            while (x < len_s1)
            {
                map[(unsigned int)(s1[x] - 'a')] += 1;
                x++;
            }
            x = 0;
            while (x < len_minus)
            {
                i = 0;
                std::copy(std::begin(map), std::end(map), std::begin(map2));
                while (i < len_s1)
                {
                    if (map2[(int)(s2[x + i] - 'a')] > 0)
                    {
                        map2[(int)(s2[x + i] - 'a')]--;
                        i++;
                        continue;
                    }
                    break;
                }
                if (i == len_s1)
                        return (true);
                x++;
            }
            return false;
        }
};

/*

    This exercice have to be corrected.


*/