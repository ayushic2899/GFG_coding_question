class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int ans=0;
        for(int i=1;i<=n;i++){
            ans=ans^i;
        }
        for(int j=0;j<n-1;j++){
            ans=ans^array[j];
        }
        return ans;
    }
};
