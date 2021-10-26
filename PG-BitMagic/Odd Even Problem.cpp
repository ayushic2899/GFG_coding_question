class Solution {
  public:
    string oddEven(string S) {
        // code here
        int even=0;
        int odd=0;
        unordered_map<int,int>mp;
        for(int i=0;i<S.size();i++){
            mp[S[i]]++;
        }
        for(auto it:mp){
            if(it.second%2==0 &&(it.first-'a'+1)%2==0){
                even++;
            }
            if(it.second%2!=0 && (it.first-'a'+1)%2!=0){
                odd++;
            }
        }
        if((even+odd)%2==0){
            return "EVEN";
        }
        else{
            return "ODD";
        }
    }
};
