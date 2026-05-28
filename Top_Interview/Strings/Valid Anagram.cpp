class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int sLen = s.size();
        int tLen = t.size();

        if(sLen != tLen)
        {
            return false;
        }

        const int ALPHABET_MAX = 26;

        vector<int> sAlphabetVector(ALPHABET_MAX, 0);
        vector<int> tAlphabetVector(ALPHABET_MAX, 0);

        for(int i = 0; i < sLen; i++)
        {
            sAlphabetVector[s[i] - 'a']++;
            tAlphabetVector[t[i] - 'a']++;
        }

        for(int i = 0; i < ALPHABET_MAX; i++)
        {
            if(sAlphabetVector[i] != tAlphabetVector[i])
            {
                return false;
            }
        }

        return true;
    }
};