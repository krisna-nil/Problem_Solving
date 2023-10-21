class Solution {
public:
    bool isPalindrome(int x) {
        string str=to_string(x);
        int len=str.length();
        for(int i=0,j=len-1;i<len/2;i++,j--)
        {
            if(str[i]!=str[j])
            return false;
        }
        
        return true;
        
    }
};