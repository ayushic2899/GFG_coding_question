 class Solution {
  public:
    long long noOfWays(int M , int N , int X) {
        long long int dp[N+1][X+1];
        memset(dp,0,sizeof(dp));
        dp[0][0]=1;
        for(int i=1;i<=N;i++){   //3
           for(int j=1;j<=X;j++){  //6
               for(int k=1;k<=M;k++){  //2
                   if(k<=j){    
                       dp[i][j]+=dp[i-1][j-k];   
                   }
               }
           }
       }
       return dp[N][X];
    }
};
