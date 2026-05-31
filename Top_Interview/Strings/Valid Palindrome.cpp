class Solution {
public:
    
    enum Category
    {
        LOWER,
        UPPER,
        NUMBER,
        DELETE,
    };
    
    Category CheckChar(char c)
    {
        if(c >= '0' && c <= '9')
        {
            return Category::NUMBER;
        }
        
        if(c >= 'A' && c <= 'Z')
        {
            return Category::UPPER;
        }
        
        if(c >= 'a' && c <= 'z')
        {
            return Category::LOWER;
        }
        
        return Category::DELETE;
    }
    
    
    bool isPalindrome(string s)
    {
        int len = s.size();
        if(len == 0)
        {
            return true;
        }
        
        string after = "";
        for(int i = 0; i < len; i++)
        {
            Category current = CheckChar(s[i]);
            
            switch(current)
            {
                case Category::LOWER:
                case Category::NUMBER:
                    after += s[i];
                    break;
                case Category::UPPER:
                    after += (char)(s[i] + 32);
                    break;
            }
        }
        
        len = after.size();
        int back = len - 1;
        for(int front = 0; front < len / 2; front++, back--)
        {
            if(after[front] != after[back])
            {
                return false;
            }
        }
        
        return true;
    }
};