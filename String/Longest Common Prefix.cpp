class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        string answer = "";
        
        bool isEnd = false;
        int total = strs.size();
        int idx = 0;
        while(!isEnd && !IsOverRange(strs, idx))
        {
            int cnt = 0;
            char current = strs[0][idx];
            for(int i = 1; i < total; i++)
            {
                if(current == strs[i][idx])
                {
                    cnt++;
                }
                else
                {
                    isEnd = true;
                    break;
                }
            }

            if(cnt == total - 1)
            {
                answer += current;
            }

            idx++;
        }

        return answer;
    }

    bool IsOverRange(vector<string>& strs, int index)
    {
        bool rel = false;
        for(int i = 0; i < strs.size(); i++)
        {
            if(index >= strs[i].size())
            {
                rel = true;
                break;
            }
        }

        return rel;
    }
};