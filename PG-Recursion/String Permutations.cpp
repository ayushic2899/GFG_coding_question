 class Solution{
    public:
    //Complete this function
     void solve(string s, vector<string> &ans, int i)
    {
        if (i == s.size()-1)
        {
            ans.push_back(s);
            return;
        }
            for (int j=i; j<s.size(); j++)
        {
            swap(s[i], s[j]);
            solve(s, ans, i+1);
            swap(s[i], s[j]);
        }
    }
    
    vector<string> permutation(string S)
    {
        vector<string> ans;
        solve(S, ans, 0);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
