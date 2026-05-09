class Solution {
public:
    vector<int> plusOne(vector<int>& digits)
    {
        vector<int> answer;
        int carry = 0;
        int len = digits.size();
        for(int i = len - 1; i >= 0; i--)
        {
            int current = digits[i];
            if(i == len - 1)
            {
                current++;
            }
            
            if(carry > 0)
            {
                current++;
                carry = 0;
            }
            
            if(current >= 10)
            {
                answer.push_back(current % 10);
                carry++;
            }
            else
            {
                answer.push_back(current);
            }
        }
        
        if(carry > 0)
        {
            answer.push_back(1);
        }
        
        reverse(answer.begin(), answer.end());
        
        return answer;
    }
};