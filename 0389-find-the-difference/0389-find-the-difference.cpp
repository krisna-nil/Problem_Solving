class Solution {
public:
       char findTheDifference(string s, string t) {
        unordered_map<char,int>mp;
        int n=t.size();
        int m=s.size();
        for(int i=0;i<n;i++)
        {
            mp[t[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            mp[s[i]]--;
        }
        char ans;
        for(auto x:mp)
        {
        if(x.second>0)
        {
            ans=x.first;
        }
        }
        return ans;
        
    }
};