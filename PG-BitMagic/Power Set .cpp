class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		      vector <string> ans;
     int n = s.size();
     for (int num=0; num<(1<<n); num++)
     {
         string temp="";
         for (int i=0; i<n; i++)
         {
             if (num&(1<<i))
             {
                 temp+=s[i];
             }
         }
         if (!temp.empty())
         {
             ans.push_back(temp);
         }
     }sort(ans.begin(), ans.end());
     return ans;
		}
};
