class Solution {
public:
    string makeGood(string s) {

    int n=s.length();
    stack<char>st;
    for(int i=0;i<n;i++)
    {
            if(!st.empty() && (st.top()==s[i]+32||st.top()==s[i]-32))
            st.pop();
            else
            st.push(s[i]);
    }
    string str="";
    while(!st.empty())
    {
        str+=st.top();
        st.pop();
    }
    reverse(str.begin(),str.end());
        return str;
    }
};