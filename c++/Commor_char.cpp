class Solution 
{
public:
    vector<string> commonChars(vector<string>& A) 
    {
        int map[26];
        int map2[26];
        vector<string> ret;

        for (int i = 0; i < 26; i++)
            map[i] = 0;
        for (int i = 0; i < A.size(); i++)
        {
            if (i == 0)
            {
                for (int j = 0; j < A[i].length(); j++)
                    map[(unsigned int)(A[i][j] - 'a')]++;
                continue;
            }
            for (int j = 0; j < A[i].length(); j++)
                    map2[(unsigned int)(A[i][j] - 'a')]++;
            for (int j = 0; j < 26; j++)
                if (map2[j] > map[j])
                    map[j] = map2[j];
        }
        for (int j = 0; j < 26; j++)
            if (map[j] > 0)
                ret.push_back(map[j] + 'a')
        return (map);
    }
};

/*
        Incomplete exercice of leetcode.
*/